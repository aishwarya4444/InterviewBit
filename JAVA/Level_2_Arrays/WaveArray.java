// https://www.interviewbit.com/problems/wave-array/

import java.io.*;
import java.util.*;

class Solution {
  public ArrayList<Integer> wave(ArrayList<Integer> A) {
    int i, tmp, N=A.size();
    Collections.sort(A);
    if(N%2 == 1) {
      N--;
    }
    for(i=0; i<N; i+=2) {
      tmp = A.get(i);
      A.set(i, A.get(i+1));
      A.set(i+1, tmp);
    }
    return A;
  }
}

class WaveArray {
  public static void main(String args[]) {
    Solution s = new Solution();
    int i;
    ArrayList<Integer> X = new ArrayList<Integer>();
    ArrayList<Integer> Y = new ArrayList<Integer>();
    X.add(8);
    X.add(7);
    X.add(6);
    X.add(5);
    X.add(4);
    X.add(3);
    X.add(2);
    X.add(1);
    X.add(0);
    Y = s.wave(X);
    for(i=0; i<Y.size(); i++) {
      System.out.print(Y.get(i)+" ");
    }
  }
}