// 원하는 문자열 찾기
#include <iostream>

std::string tolowerString(std::string str) {
  for (int i = 0; i < size(str); i++) {
    str[i] = tolower(str[i]);
  }
  return str;
}

int solution(std::string myString, std::string pat) {
  if (size(myString) < size(pat)) {
    return 0;
  }

  myString = tolowerString(myString);
  pat = tolowerString(pat);
  for (int i = 0; i <= size(myString) - size(pat); i++) {
    if (myString.substr(i, size(pat)) == pat) {
      return 1;
    }
  }
  return 0;
}

int main() {
  std::string myString = "AbCdEfG";
  std::string pat = "efg";
  std::cout << solution(myString, pat) << std::endl;
}