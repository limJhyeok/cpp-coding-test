// ad 제거하기
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> strArr) {
  std::vector<std::string> answer;
  for (int i = 0; i < size(strArr); i++) {
    if (strArr[i].find("ad") == std::string::npos) {
      answer.push_back(strArr[i]);
    }
  }
  return answer;
}

int main() {
  std::vector<std::string> strArr = {"there", "are", "no", "a", "ds"};
  std::vector<std::string> answer = solution(strArr);
  for (std::string s : answer) {
    std::cout << s << " ";
  }
  std::cout << std::endl;
}