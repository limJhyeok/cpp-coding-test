// 문자열 정수의 합
#include <iostream>

int solution(std::string num_str) {
  int answer = 0;
  int num;
  for (char c : num_str) {
    num = c - '0';
    answer += num;
  }
  return answer;
}

int main() {
  std::string num_str = "10000";
  std::cout << solution(num_str) << std::endl;
}