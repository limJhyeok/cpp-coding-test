// 접두사인지 확인하기
#include <iostream>

bool solution(std::string my_string, std::string is_prefix) {
  size_t prefixSize = size(is_prefix);
  return (my_string.substr(0, prefixSize) == is_prefix);
}

int main() {
  std::string my_string = "banana";
  std::string is_prefix = "abcd";
  std::cout << solution(my_string, is_prefix) << std::endl;
}