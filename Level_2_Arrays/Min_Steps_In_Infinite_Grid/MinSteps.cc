#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int coverPoints(vector<int> &, vector<int> &);
};

// Input : X and Y co-ordinates of the points in order.
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int i, dist = 0;
    for(i=1; i<X.size(); i++) {
        dist += max( abs(X[i]-X[i-1]), abs(Y[i]-Y[i-1]));
    }
    return dist;
}

int main(void ) {
  Solution s;
  vector<int> x, y;

  x.push_back(0);
  x.push_back(1);
  x.push_back(1);

  y.push_back(0);
  y.push_back(1);
  y.push_back(2);

  cout<<s.coverPoints(x,y)<<'\n';

  return 0;
}