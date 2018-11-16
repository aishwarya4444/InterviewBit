#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> wave(vector<int> &);
};

vector<int> Solution::wave(vector<int> &A) {
  int i, N = A.size();
  if(N%2) {
    N--;
  }
  sort(A.begin(), A.end());
  for(i=0; i<N; i+=2) {
    swap(A[i], A[i+1]);
  }
  return A;
}

int main(void ) {
  Solution s;
  vector<int> v, _v;
  size_t i;

  v.push_back(7);
  v.push_back(6);
  v.push_back(5);
  v.push_back(4);
  v.push_back(3);
  v.push_back(2);
  v.push_back(1);
  v.push_back(0);

  _v = s.wave(v);

  for(i=0; i<v.size(); i++){
    cout<<_v[i]<<' ';
  }

  return 0;
}
