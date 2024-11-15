// 문자열 묶기
#include <iostream>
#include <map>
#include <vector>

int solution(std::vector<std::string> strArr) {
  std::map<int, int> strSizeCounter;

  for (std::string strElem : strArr) {
    strSizeCounter[size(strElem)] += 1;
  }

  int maxCount = -1;
  int answer;
  for (auto pair : strSizeCounter) {
    if (pair.second > maxCount) {
      maxCount = pair.second;
    }
  }
  return maxCount;
}

int main() {
  std::vector<std::string> strArr = {"a", "bc", "d", "efg", "hi"};
  std::cout << solution(strArr) << std::endl;
}