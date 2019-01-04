// https://www.interviewbit.com/problems/palindrome-integer/

int Solution::isPalindrome(int A) {
    if(A<0)return false;
    int r=0, n=A;
    while(A) {
        r = 10*r + (A%10);
        A /= 10;
    }
    return n==r ? true : false;
}
