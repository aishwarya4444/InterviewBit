// https://www.interviewbit.com/problems/largest-coprime-divisor/

#include<iostream>
using namespace std;

class Solution {
  public:
    int cpFact(int, int);
};

int gcd(int a , int b)
{
   if(a<b) {
     a=a+b;
     b=a-b;
     a=a-b;
   }
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int Solution::cpFact(int A, int B) {
  while(gcd(A,B)!=1) {
    A/=gcd(A,B);
  }
  return A;
}

int main(void ) {
  Solution s;
  cout<<s.cpFact(30,12)<<endl;
  return 0;
}
