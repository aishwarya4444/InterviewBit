// https://www.interviewbit.com/problems/rotate-matrix/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    void rotate(vector<vector<int> > &);
};

void Solution::rotate(vector<vector<int> > &A) {
  int N=A.size();
  int r, c, tmp;
  for(r=0;r<N/2;r++)
  {
    for(c=r;c<N-r-1;c++)
    {
      tmp = A[r][c];
      A[r][c] = A[N-1-c][r];
      A[N-1-c][r] = A[N-1-r][N-1-c];
      A[N-1-r][N-1-c] = A[c][N-1-r];
      A[c][N-1-r] = tmp;
    }
  }
}

void printVector(vector<vector<int> > &A) {
  size_t r, c;
  for(r=0; r<A.size(); r++) {
    for(c=0; c<A[0].size(); c++) {
      cout<<A[r][c]<<' ';
    }
    cout<<'\n';
  }
}

// for compilation use ::
// g++ -std=c++11 RotateMatrix.cc
int main(void) {
  Solution s;
  vector<vector<int> > v{ { 1, 2, 3 },
                          { 1, 2, 3 },
                          { 1, 2, 3 } };
  cout<<"\nBefore rotate:\n";
  printVector(v);
  s.rotate(v);
  cout<<"\nAfter rotate:\n";
  printVector(v);
  return 0;
}
