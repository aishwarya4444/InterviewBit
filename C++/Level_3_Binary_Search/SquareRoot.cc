// https://www.interviewbit.com/problems/square-root-of-integer/

int Solution::sqrt(int A) {
  if(A<1)return A;
  int l=1, m, r=A, x;
  while(l<=r)
  {
    m=(l+r)/2;
    if(m<=A/m)
    {
      x=m;
      l=m+1;
    }
    else r=m-1;
  }
  return x;
}
