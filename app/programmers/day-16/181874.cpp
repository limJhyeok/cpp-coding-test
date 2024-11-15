// A 강조하기
#include <iostream>

std::string solution(std::string myString) {
  for (int i = 0; i < size(myString); i++) {
    if (myString[i] == 'a') {
      myString[i] = 'A';
      continue;
    }
    if ((isupper(myString[i])) && (myString[i] != 'A')) {
      myString[i] = tolower(myString[i]);
    }
  }
  return myString;
}

int main() {
  std::string myString = "PrOgRaMmErS";
  std::string answer = solution(myString);
  std::cout << answer << std::endl;
}