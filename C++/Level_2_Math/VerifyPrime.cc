// https://www.interviewbit.com/problems/verify-prime/

int Solution::isPrime(int A) {
  int upperLimit = (int)(sqrt(A));
  for (int i = 2; i <= upperLimit; i++) {
    if (i < A && A % i == 0) return 0;
  }
  return A==1 ? 0 : 1;
}
