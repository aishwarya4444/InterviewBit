// https://www.interviewbit.com/problems/max-distance/

int Solution::maximumGap(const vector<int> &A) {
  int i, N=A.size(), rmax, ans=0;
  vector<pair<int,int> > v;
  for(i=0; i<N; i++) {
    v.push_back(make_pair(A[i],i));
  }
  sort(v.begin(), v.end());
  rmax=v[N-1].second;
  for(i=N-2; i>=0; i--){
    ans=max(ans,rmax-v[i].second);
    rmax=max(rmax,v[i].second);
  }
  return ans;
}
