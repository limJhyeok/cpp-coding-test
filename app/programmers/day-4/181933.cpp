// flag에 따라 다른 값 반환하기
#include <iostream>
using namespace std;

int solution(int a, int b, bool flag){
  if (flag){
    return a + b;
  }
  return a -b;
}

int main(){
  int a = -4;
  int b = 7;
  bool flag = false;
  cout << solution(a, b, flag);
}