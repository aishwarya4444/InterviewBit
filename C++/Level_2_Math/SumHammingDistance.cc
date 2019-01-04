// https://www.interviewbit.com/problems/sum-of-pairwise-hamming-distance/

int Solution::hammingDistance(const vector<int> &A) {

  unsigned long long int ans = 0, count;  // Initialize result
  int n = A.size();

  // traverse over all bits
  for (int i = 0; i < 32; i++)
  {
    // count number of elements with i'th bit set
    count = 0;
    for (int j = 0; j < n; j++)
      if ( (A[j] & (1 << i)) )
        count++;

    // Add "count * (n - count) * 2" to the answer
    ans += (count * (n - count) * 2);
    ans %= 1000000007;
  }

  return ans;
}
