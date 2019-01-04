// https://www.interviewbit.com/problems/excel-column-title/

string Solution::convertToTitle(int A) {
  size_t rem;
  string number, alphabet;
  while(A) {
    rem = (A-1)%26;
    alphabet = rem+'A';
    A = (A-1)/26;
    number = alphabet + number;
  }
  return number;
}
