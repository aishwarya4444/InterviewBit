// https://www.interviewbit.com/problems/greatest-common-divisor/

#include<iostream>
using namespace std;

class Solution {
  public:
    int gcd(int, int);
};

int Solution::gcd(int A, int B) {
  int rem, num, denom;
  if(A>B) {
    num = A;
    denom = B;
  } else {
    num = B;
    denom = A;
  }
  // gcd(k, 0) = gcd(0,k) = k
  if(B==0) {
    return A;
  }
  // gcd(0, 0) isn't defined
  if(A==0) {
    return -1;
  }
  while(num%denom) {
    rem = num%denom;
    num = denom;
    denom = rem;
  }
  return denom;
}


int main(void ) {
  Solution s;
  cout<<s.gcd(8,12)<<endl;
  return 0;
}
