// 문자열 뒤의 n글자
#include <iostream>

std::string solution(std::string my_string, int n) {
  return my_string.substr(size(my_string) - n, n);
}

int main() {
  std::string my_string = "He110W0r1d";
  int n = 5;
  std::cout << solution(my_string, n) << std::endl;
}