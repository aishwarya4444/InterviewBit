// https://www.interviewbit.com/problems/search-for-a-range/

vector<int> Solution::searchRange(const vector<int> &A, int B) {
  int l, m, r, x=-1, y=-1;
  vector<int> v;
  l=0;
  r=A.size()-1;
  while(l<=r)
  {
    m=(l+r)/2;
    if(A[m]==B)x=m,r=m-1;
    else if(A[m]<B)l=m+1;
    else r=m-1;
  }
  l=0;
  r=A.size()-1;
  while(l<=r)
  {
    m=(l+r)/2;
    if(A[m]==B)y=m,l=m+1;
    else if(A[m]<B)l=m+1;
    else r=m-1;
  }
  v.push_back(x);
  v.push_back(y);
  return v;
}
