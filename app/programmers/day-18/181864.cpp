// 문자열 바꿔서 찾기
#include <iostream>

int solution(std::string myString, std::string pat) {
  if (size(myString) < size(pat)) {
    return 0;
  }
  for (int i = 0; i < size(myString); i++) {
    if (myString[i] == 'A') {
      myString[i] = 'B';
    } else if (myString[i] == 'B') {
      myString[i] = 'A';
    }
  }
  if (myString.find(pat) == std::string::npos) {
    return 0;
  }
  return 1;
}

int main() {
  std::string myString = "ABBAA";
  std::string pat = "AABB";

  std::cout << solution(myString, pat) << std::endl;
}