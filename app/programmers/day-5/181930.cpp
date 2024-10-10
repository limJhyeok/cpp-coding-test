#include <iostream>
using namespace std;

bool isSame(int a, int b){
  if (a == b){
    return true;
  }
  return false;
}

int solution(int a, int b, int c){
  if (isSame(a, b) && isSame(a, c) && isSame(b, c)){
    return (a + b + c)*(a*a + b*b + c*c)*(a*a*a + b*b*b + c*c*c);
  }
  else if (!isSame(a, b) && !isSame(a, c) && !isSame(b, c)){
    return a+b+c;
  }
  return (a + b + c)*(a*a + b*b + c*c);
}

int main(){
  int a = 4;
  int b = 4;
  int c = 4;
  cout << solution(a, b, c);
}