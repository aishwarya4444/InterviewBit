// https://www.interviewbit.com/problems/binary-representation/

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution {
  public:
    string findDigitsInBinary(int );
};

string Solution::findDigitsInBinary(int A) {
  string r;
  char rem[] = "01";
  while(A) {
    r = rem[A%2] + r;
    A /= 2;
  }
  if(r.size()==0 && A==0) r = '0';
  if(A) r = rem[A] + r;
  return r;
}


int main(void ) {
  Solution s;
  cout<<s.findDigitsInBinary(4)<<'\n';
  return 0;
}
