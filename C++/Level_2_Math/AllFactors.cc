// https://www.interviewbit.com/problems/all-factors/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
  public:
    vector<int> allFactors(int );
};

vector<int> Solution::allFactors(int A) {
  vector<int> r, R;
  for(int f=1; f<=sqrt(A); f++) {
    if(A%f == 0) {
      r.push_back(f);
      if(f!=sqrt(A)) {
        R.push_back(A/f);
      }
    }
  }
  for(int i=R.size()-1; i>=0; i--) {
    r.push_back(R[i]);
  }
  return r;
}

int main(void ) {
  Solution s;
  vector<int> result;
  result = s.allFactors(36);
  for(int i=0; i<result.size(); i++) {
    cout<<result[i]<<' ';
  }
  cout<<'\n';
  return 0;
}
