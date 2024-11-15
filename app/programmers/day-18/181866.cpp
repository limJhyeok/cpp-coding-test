// 문자열 잘라서 정렬하기
#include <algorithm>
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::string myString) {
  std::string temp;
  std::vector<std::string> answer;
  for (int i = 0; i < size(myString); i++) {
    if (myString[i] == 'x') {
      if (size(temp) != 0) {
        answer.push_back(temp);
      }
      temp = "";
    } else {
      temp += myString[i];
    }
  }
  if (size(temp) != 0) {
    answer.push_back(temp);
  }
  sort(answer.begin(), answer.end());
  return answer;
}

int main() {
  std::string myString = "axbxcxdx";
  std::vector<std::string> answer = solution(myString);
  for (std::string s : answer) {
    std::cout << s << " ";
  }
  std::cout << std::endl;
}