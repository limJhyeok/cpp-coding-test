// 무작위로 K개의 수 뽑기
#include <iostream>
#include <map>
#include <vector>

#include "../../utils/timer_utils.h"

std::vector<int> mapSolution(std::vector<int> arr, int k) {
  std::map<int, int> m;
  std::vector<int> answer;
  int count = 0;
  for (int i = 0; i < size(arr); i++) {
    if (count >= k) {
      break;
    }
    if (m[arr[i]] == 0) {
      answer.push_back(arr[i]);
      count++;
      m[arr[i]] += 1;
    }
  }
  if (size(answer) < k) {
    std::vector<int> defaultVec = std::vector<int>(k - size(answer), -1);
    answer.insert(answer.end(), defaultVec.begin(), defaultVec.end());
  }
  return answer;
}

bool isDuplicateInVector(std::vector<int> arr, int x) {
  for (int num : arr) {
    if (num == x) {
      return true;
    }
  }
  return false;
}

std::vector<int> solution(std::vector<int> arr, int k) {
  std::vector<int> answer;
  for (int num : arr) {
    bool isDuplicate = isDuplicateInVector(answer, num);
    if (!isDuplicate) {
      answer.push_back(num);
    }
    if (size(answer) >= k) {
      return answer;
    }
  }
  while (size(answer) < k) {
    answer.push_back(-1);
  }
  return answer;
}

int main() {
  std::vector<int> arr = {0, 1, 1, 1, 1};
  int k = 4;
  std::vector<int> answer = mapSolution(arr, k);
  for (int num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // mapSolution is about 1.5 ~ 2 times faster than solution
  int iterations = 10;
  compareFunctionSpeeds([&]() { mapSolution(arr, k); },
                        [&]() { solution(arr, k); }, iterations);
}