// https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
  vector<int> r;
  int j, sum = 1;
  for(j=A.size()-1; j>=0; j--) {
    sum += A[j];
    r.push_back(sum%10);
    sum /= 10;
  }
  if(sum) {
    r.push_back(sum);
  }
  j = r.size()-1;
  while(r[j]==0) {
    r.erase(r.begin()+j);
    j--;
  }
  reverse(r.begin(), r.end());
  return r;
}
