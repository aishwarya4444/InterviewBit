// https://www.interviewbit.com/problems/sorted-permutation-rank/

// https://www.geeksforgeeks.org/lexicographic-rank-of-a-string/

int fact(int n) {
  return n<2 ? 1 : (n*fact(n-1))%1000003;
}

int Solution::findRank(string A) {
  // A = 'DTNGJPURFHYEW'

  int i, j, count, rank=1, N=A.size();

  for(i=0;i<N-1;i++) {
    // count characters to right which are smaller
    count = 0;
    for(j=i+1;j<N;j++) {
      if(A[i]>A[j]) {
        count++;
      }
    }
    rank += (count*fact(N-1-i))%1000003;
  }
  return (rank)%1000003;
}
