// n의 배수
#include <iostream>
using namespace std;

int solution(int num, int n) {
  if (num % n == 0) {
    return 1;
  }
  return 0;
}

int main() {
  int num = 34;
  int n = 3;
  cout << solution(num, n);
}