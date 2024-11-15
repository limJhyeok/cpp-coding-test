// 특정 문자열로 끝나는 가장 긴 부분 문자열 찾기
#include <iostream>

std::string solution(std::string myString, std::string pat) {
  for (int i = size(myString) - size(pat); i >= 0; i--) {
    std::string mySubstr = myString.substr(i, size(pat));
    if (mySubstr == pat) {
      return myString.substr(0, i + size(pat));
    }
  }
  return "";
}

int main() {
  std::string myString = "AAAAaaaa";
  std::string pat = "a";
  std::cout << solution(myString, pat) << std::endl;
}