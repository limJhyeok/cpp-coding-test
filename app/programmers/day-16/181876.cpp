// 소문자로 바꾸기
#include <algorithm>
#include <iostream>

std::string solution(std::string myString) {
  std::transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
  return myString;
}

int main() {
  std::string myString = "aBcDeFg";
  std::string answer = solution(myString);
  std::cout << answer << std::endl;
}