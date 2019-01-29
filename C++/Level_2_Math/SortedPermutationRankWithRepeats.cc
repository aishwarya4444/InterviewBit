// https://www.interviewbit.com/problems/sorted-permutation-rank-with-repeats/

// https://www.geeksforgeeks.org/lexicographic-rank-string-duplicate-characters/
// https://www.geeksforgeeks.org/modulo-1097-1000000007/

#include<iostream>
#include<cstring>
#include<map>
#include<vector>
#define ULLI unsigned long long int
using namespace std;

class Solution {
  public:
    int findRank(string );
};

#define MOD 1000003
#define ULLI unsigned long long int

// Inverse modulo
// https://en.wikipedia.org/wiki/Modular_multiplicative_inverse
// Calculate num ^ MOD-2  % MOD
ULLI inverse(int n) {
  ULLI base = n, power = MOD-2, result = 1;
  while(power) {
    if(power%2 == 0) {
      power /= 2;
      base = (base*base) % MOD;
    } else {
      result = (result*base) % MOD;
      power--;
    }
  }
  return result;
}

void factorialMod(vector<int> &v, int N) {
  int i, num = 1;
  v.push_back(num);
  for(i=1; i<=N; i++) {
    num = (num*i) % MOD;
    v.push_back(num);
  }
}

int Solution::findRank(string A) {
  int i, j, count, N=A.size();
  unsigned long long int repeats, rank = 1;
  vector<int> fact;
  map<char, int> m;
  map<char, int>::iterator it;

  for(i=0;i<N;i++) {
    m[A[i]]++;
  }

  // calculate factorial of values and store value % MOD
  factorialMod(fact, N);

  for(i=0;i<N-1;i++) {
    // count characters to right which are smaller
    count = 0;
    for(j=i+1;j<N;j++) {
      if(A[i]>A[j]) {
        count++;
      }
    }
    repeats=1;
    // find "inverse" frequency of repeating characters
    for(it=m.begin();it!=m.end();it++) {
      repeats = (repeats*inverse(fact[it->second])) % MOD;
    }
    rank = (rank + count*fact[N-1-i]*repeats)%1000003;
    m[A[i]]--;
  }
  return rank;
}

int main(void ) {
  Solution s;
  cout<<s.findRank("settLe")<<'\n';                      //107
  cout<<s.findRank("sadasdsasassasas")<<'\n';            //208526
  cout<<s.findRank("asasdsdsadasdadsadasdsa")<<'\n';     //502900
  return 0;
}
