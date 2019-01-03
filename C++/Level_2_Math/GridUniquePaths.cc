// https://www.interviewbit.com/problems/grid-unique-paths/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int uniquePaths(int, int);
};

int Solution::uniquePaths(int A, int B) {
  int dp[A][B];
  int r, c;
  for(r=0;r<A;r++) {
    dp[r][0] = 1;
  }
  for(c=0;c<B;c++) {
    dp[0][c] = 1;
  }
  for(r=1;r<A;r++) {
    for(c=1;c<B;c++) {
      dp[r][c] = dp[r][c-1] + dp[r-1][c];
    }
  }
  return dp[A-1][B-1];
}


int main(void ) {
  Solution s;
  cout<<s.uniquePaths(2,2)<<endl;

  return 0;
}
