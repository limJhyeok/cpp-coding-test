// 배열의 원소만큼 추가하기
#include <iostream>
#include <vector>

#include "../../utils/timer_utils.h"

std::vector<int> solution(std::vector<int> arr) {
  std::vector<int> answer;
  for (int i = 0; i < size(arr); i++) {
    int num = arr[i];
    for (int i = 0; i < num; i++) {
      answer.push_back(num);
    }
  }
  return answer;
}

std::vector<int> gptSolution(const std::vector<int>& arr) {
  std::vector<int> result;

  // 필요한 공간을 미리 예약
  // size_t totalSize = 0;
  // for (int num : arr) {
  //     totalSize += num;
  // }
  // result.reserve(totalSize);

  // 요소를 한 번에 추가
  for (int num : arr) {
    result.insert(result.end(), num, num);
  }

  return result;
}

int main() {
  std::vector<int> arr = {1};
  std::vector<int> answer = solution(arr);

  for (int num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}