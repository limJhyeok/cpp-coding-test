// 접미사인지 확인하기
#include <iostream>

int solution(std::string my_string, std::string is_suffix) {
  size_t is_suffix_size = size(is_suffix);
  if (is_suffix_size > size(my_string)) {
    return 0;
  }
  std::string suffix = my_string.substr(size(my_string) - is_suffix_size);
  if (suffix == is_suffix) {
    return 1;
  }
  return 0;
}

int main() {
  std::string my_string = "banana";
  std::string is_suffix = "wxyz";
  std::cout << solution(my_string, is_suffix) << std::endl;
}