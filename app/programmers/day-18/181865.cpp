// 간단한 식 계산하기
#include <iostream>
#include <vector>

int solution(std::string binomial) {
  std::string temp;
  std::vector<std::string> vec;
  for (int i = 0; i < size(binomial); i++) {
    if (binomial[i] == ' ') {
      vec.push_back(temp);
      temp = "";
    } else {
      temp += binomial[i];
    }
  }
  vec.push_back(temp);
  int a = stoi(vec[0]);
  int b = stoi(vec[2]);
  if (vec[1] == "+") {
    return a + b;
  }
  if (vec[1] == "-") {
    return a - b;
  }
  if (vec[1] == "*") {
    return a * b;
  }
  return -1;
}

int main() {
  std::string binomial = "0 - 7777";
  std::cout << solution(binomial) << std::endl;
}