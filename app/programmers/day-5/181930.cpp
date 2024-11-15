// 주사위 게임 2
#include <math.h>

#include <iostream>
using namespace std;

bool isSame(int a, int b) {
  if (a == b) {
    return true;
  }
  return false;
}

int solution(int a, int b, int c) {
  if ((isSame(a, b) && isSame(a, c) && isSame(b, c))) {
    return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) *
           (pow(a, 3) + pow(b, 3) + pow(c, 3));
  } else if ((!isSame(a, b) && !isSame(a, c) && !isSame(b, c))) {
    return a + b + c;
  }
  return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
}

int main() {
  int a = 5;
  int b = 3;
  int c = 3;
  cout << solution(a, b, c) << endl;
}