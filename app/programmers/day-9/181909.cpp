// 접미사 배열
#include <algorithm>
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::string my_string) {
  std::vector<std::string> answer;
  for (int i = 0; i < size(my_string); i++) {
    std::string subStr = my_string.substr(i, size(my_string) - i);
    answer.push_back(subStr);
  }
  sort(answer.begin(), answer.end());
  return answer;
}

int main() {
  std::string my_string = "programmers";
  std::vector<std::string> answer = solution(my_string);
  for (auto elem : answer) {
    std::cout << elem << std::endl;
  }
}