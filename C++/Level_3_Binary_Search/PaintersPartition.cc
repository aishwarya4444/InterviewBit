// https://www.interviewbit.com/problems/painters-partition-problem/

/*
Imp Links for this:
  [1] https://articles.leetcode.com/the-painters-partition-problem-part-ii/
  [2] http://www.geeksforgeeks.org/painters-partition-problem/
*/
int Solution::paint(int A, int B, vector<int> &C) {
  int i, K=A, T=B, N=C.size();
  unsigned long long int lo, hi, mid, sum, painters;
  // find lo
  for(lo=C[0], i=1; i<N; i++) {
    lo = lo>C[i] ? lo : C[i];
  }
  // find hi
  for(hi=0, i=0; i<N; i++) {
    hi += C[i];
  }
  // binary search
  while(lo<hi) {
    mid = (hi+lo)/2;
    painters = 1;
    sum = 0;
    for(i=0; i<N; i++) {
      sum += C[i];
      if(sum > mid) {
        sum = C[i];
        painters++;
      }
    }
    if(painters <= K) hi = mid;
    else lo = mid + 1;
  }
  return (lo*T)%10000003;
}
