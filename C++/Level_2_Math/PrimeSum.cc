// https://www.interviewbit.com/problems/prime-sum/
// https://en.wikipedia.org/wiki/Goldbach%27s_conjecture

vector<int> Solution::primesum(int A) {
  // find all primes less than A
  int i, j;
  vector<int> result;
  vector<int> primes;
  vector<bool> isPrime(A+1, true);
  isPrime[0] = false;
  isPrime[1] = false;
  for(i=2;i<=A;i++) {
    if(isPrime[i])primes.push_back(i);
    for(j=2*i;j<=A;j+=i) {
      isPrime[j] = false;
    }
  }
  // find numbers which give the result
  i = 0;
  j = primes.size()-1;
  while(i<=j) {
    if(primes[i]+primes[j]==A) {
      result.push_back(primes[i]);
      result.push_back(primes[j]);
      return result;
    }
    if(primes[i]+primes[j]<A)i++;
    if(primes[i]+primes[j]>A)j--;
  }
  return result;
}
