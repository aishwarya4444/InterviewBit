// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

import java.io.*;
import java.util.*;

class Solution {
  public int coverPoints(int[] A, int[] B) {
    int i, dist = 0;
    for(i=1; i<B.length; i++) {
      dist += Math.max( Math.abs(A[i]-A[i-1]), Math.abs(B[i]-B[i-1]));
    }
    return dist;
  }
}

class _Solution {
  public int coverPoints(ArrayList<Integer> A, ArrayList<Integer> B) {
    int i, dist = 0;
    for(i=1; i<B.size(); i++) {
      dist += Math.max( Math.abs(A.get(i)-A.get(i-1)), Math.abs(B.get(i)-B.get(i-1)));
    }
    return dist;
  }
}

class MinSteps {
  public static void main(String args[]) {
    // Solution using int []
    int[] x = {0, 1, 1};
    int[] y = {0, 1, 2};

    Solution s = new Solution();
    System.out.println(s.coverPoints(x,y));

    // Solution using ArrayList
    ArrayList<Integer> X = new ArrayList<Integer>();
    X.add(0);
    X.add(1);
    X.add(1);

    ArrayList<Integer> Y = new ArrayList<Integer>();
    Y.add(0);
    Y.add(1);
    Y.add(2);

    _Solution _s = new _Solution();
    System.out.println(_s.coverPoints(X,Y));
  }
}