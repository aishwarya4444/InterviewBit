// https://www.interviewbit.com/problems/set-matrix-zeros/

void Solution::setZeroes(vector<vector<int> > &A) {
  int R=A.size(), C=R?A[0].size():0;
  int r, c, x=0, y=0;
  for(r=0;r<R;r++)if(!A[r][0])y=1;
  for(c=0;c<C;c++)if(!A[0][c])x=1;
  for(r=1;r<R;r++)
  {
    for(c=1;c<C;c++)
    {
      if(!A[r][c])A[r][0]=0,A[0][c]=0;
    }
  }
  for(r=1;r<R;r++)
  {
    if(!A[r][0])
    {
      for(c=1;c<C;c++)A[r][c]=0;
    }
  }
  for(c=1;c<C;c++)
  {
    if(!A[0][c])
    {
      for(r=1;r<R;r++)A[r][c]=0;
    }
  }
  if(x)
  {
    for(c=0;c<C;c++)A[0][c]=0;
  }
  if(y)
  {
    for(r=0;r<R;r++)A[r][0]=0;
  }
}
