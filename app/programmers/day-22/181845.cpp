// 문자열로 변환
#include <iostream>

std::string solution(int n) { return std::to_string(n); }

int main() {
  int n = 123;
  std::cout << solution(n) << std::endl;
}