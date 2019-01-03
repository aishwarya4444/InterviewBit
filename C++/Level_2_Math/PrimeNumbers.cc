// https://www.interviewbit.com/problems/prime-numbers/

// sieve of Eratosthenes
vector<int> Solution::sieve(int A) {
  int n=A;
  vector<int> result;
  vector<bool> r(n+1,true);
  r[0]=false;
  r[1]=false;
  for(int i=2; i<=n; i++)
  {
    if(r[i])result.push_back(i);
    for(int j=2*i; j<=n; j+=i)
    {
      r[j]=false;
    }
  }
  return result;
}
