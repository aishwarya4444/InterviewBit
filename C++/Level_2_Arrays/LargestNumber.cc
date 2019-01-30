// https://www.interviewbit.com/problems/largest-number/

bool compare(string a, string b) {
  string ab=a+b, ba=b+a;
  return ab>ba;
}
string Solution::largestNumber(const vector<int> &A) {
  int i, N=A.size();
  string result;
  vector<string> v;
  for(i=0;i<N;i++) {
    v.push_back(to_string(A[i]));
  }
  sort(v.begin(), v.end(), compare);
  for(i=0;i<N;i++) {
    result = result + v[i];
  }
  return result[0]=='0' ? to_string(0) : result;
}
