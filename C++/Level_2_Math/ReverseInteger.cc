// https://www.interviewbit.com/problems/reverse-integer/

int Solution::reverse(int A) {
    long long int r = 0;
    while(A) {
        r = 10*r + (A%10);
        A /= 10;
    }
    return r<INT_MIN || r>INT_MAX ? 0 : (int)r;
}
