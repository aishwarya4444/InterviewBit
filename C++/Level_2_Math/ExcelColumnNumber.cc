// https://www.interviewbit.com/problems/excel-column-number/

int Solution::titleToNumber(string A) {
  size_t value;
  int i, number=0, N=A.size();
  for(i=0;i<N;i++) {
    value = A[N-1-i]-'A'+1;
    number += (int)pow(26,i)*value;
  }
  return number;
}
