// https://www.interviewbit.com/problems/fizzbuzz/

vector<string> Solution::fizzBuzz(int A) {
  vector<string> r;
  for(int i=1; i<=A; i++) {
    if(i%15==0) {
      r.push_back("FizzBuzz");
    } else if(i%5==0) {
      r.push_back("Buzz");
    } else if(i%3==0) {
      r.push_back("Fizz");
    } else {
      r.push_back(to_string(i));
    }
  }
  return r;
}
