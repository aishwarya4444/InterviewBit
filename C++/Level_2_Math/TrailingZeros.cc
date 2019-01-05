// https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

#include<iostream>
using namespace std;

class Solution {
  public:
    int trailingZeroes(int);
};

int Solution::trailingZeroes(int A) {
  int count=0;
  while(A) {
    A /= 5;
    count += A;
  }
  return count;
}

int main(void ) {
  Solution s;
  cout<<s.trailingZeroes(5)<<endl;
  return 0;
}
