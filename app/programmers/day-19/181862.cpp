// 세 개의 구분자
#include <iostream>
#include <sstream>
#include <vector>

#include "../../utils/timer_utils.h"

std::vector<std::string> mySolution(const std::string& myStr) {
  std::vector<std::string> answer;
  std::string temp;
  for (char ch : myStr) {
    if (ch == 'a' || ch == 'b' || ch == 'c') {
      if (!temp.empty()) {
        answer.push_back(temp);
        temp.clear();
      }
    } else {
      temp += ch;
    }
  }
  if (!temp.empty()) {
    answer.push_back(temp);
  }
  if (answer.empty()) {
    return {"EMPTY"};
  }
  return answer;
}

std::vector<std::string> sstreamSolution(std::string myStr) {
  std::vector<std::string> answer;

  for (auto& c : myStr) {
    if (c == 'a' || c == 'b' || c == 'c') {
      c = ' ';
    }
  }

  std::string str;
  std::stringstream ss;
  ss.str(myStr);
  while (ss >> str) {
    answer.emplace_back(str);
  }

  if (answer.empty()) {
    answer.emplace_back("EMPTY");
  }

  return answer;
}

int main() {
  std::string myStr = "cabab";
  int iterations = 100;

  compareFunctionSpeeds([&]() { mySolution(myStr); },
                        [&]() { sstreamSolution(myStr); }, iterations);

  return 0;

  // Average execution time of func1 over 100 iterations: 2.2319e-07 seconds
  // Average execution time of func2 over 100 iterations: 4.2299e-07 seconds
  // func1 is 1.8952 times faster than func2.
}
