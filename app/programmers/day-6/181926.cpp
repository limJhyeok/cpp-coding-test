// 수 조작하기 1
#include <iostream>
using namespace std;

int solution(int n, string control) {
  for (char c : control) {
    if (c == 'w') {
      n += 1;
    }
    if (c == 's') {
      n -= 1;
    }
    if (c == 'd') {
      n += 10;
    }
    if (c == 'a') {
      n -= 10;
    }
  }
  return n;
}

int main() {
  int n;
  string control = "wsdawsdassw";
  cout << solution(n, control);
  return 0;
}