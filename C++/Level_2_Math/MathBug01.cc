// https://www.interviewbit.com/problems/mathbug01/

#include<iostream>
#include<cmath>
using namespace std;

class Solution {
  public:
    int isPrime(int );
};

// Return 1 if A is prime, else 0
int Solution::isPrime(int A) {
  int upperLimit = (int)(sqrt(A));
  for (int i = 2; i <= upperLimit; i++) {
    if (i < A && A % i == 0) return 0;
  }
  return A==1 ? 0 : 1;
}

int main(void ) {
  Solution s;
  cout<<s.isPrime(4)<<'\n';
  return 0;
}
