// https://www.interviewbit.com/problems/matrix-search/

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
  int R=A.size(), C=A[0].size();
  int r=0, c=C-1;
  while(r<R && c>=0)
  {
    if(A[r][c]==B)return 1;
    if(A[r][c]>B)c--;
    else r++;
  }
  return 0;
}
