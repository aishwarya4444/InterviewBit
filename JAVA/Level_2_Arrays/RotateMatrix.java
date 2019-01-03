// https://www.interviewbit.com/problems/rotate-matrix/

import java.io.*;
import java.util.*;

class Solution {
  public void rotate(ArrayList<ArrayList<Integer>> a) {
    int r, c, tmp, N = a.size();
    for (r=0; r<N/2; r++) {
      for (c=r; c<N-1-r; c++) {
        tmp = a.get(r).get(c);
        a.get(r).set(c, a.get(N - 1 - c).get(r));
        a.get(N - 1 - c).set(r, a.get(N - 1 - r).get(N - 1 - c));
        a.get(N - 1 - r).set(N - 1 - c, a.get(c).get(N - 1 - r));
        a.get(c).set(N - 1 - r, tmp);
      }
    }
  }
}

class RotateMatrix {
  public static void printArrayList(ArrayList<ArrayList<Integer> > a) {
    for (int i = 0; i < a.size(); i++) {
      for (int j = 0; j < a.get(i).size(); j++) {
        System.out.print(a.get(i).get(j) + " ");
      }
      System.out.println();
    }
  }

  public static void main(String args[]) {
//    int[][] a = {
//      {1, 2, 3},
//      {4, 5, 6},
//      {7, 8, 9},
//    };
//
//    for (int i = 0; i < a.length; ++i) {
//      for(int j = 0; j < a[i].length; ++j) {
//        System.out.print(a[i][j]);
//      }
//      System.out.print('\n');
//    }

    Solution s = new Solution();
    ArrayList<ArrayList<Integer> > aList = new ArrayList<ArrayList<Integer> >();
    ArrayList<Integer> a1 = new ArrayList<Integer>();
    a1.add(1);
    a1.add(2);
    a1.add(3);
    aList.add(a1);
    aList.add(a1);
    aList.add(a1);

    printArrayList(aList);
    s.rotate(aList);
    printArrayList(aList);
  }
}