// 배열 조작하기
#include <iostream>
#include <vector>

std::vector<int> removeFront(std::vector<int> arr, int idx) {
  return std::vector<int>(arr.begin() + idx, arr.end());
}

std::vector<int> removeBack(std::vector<int> arr, int idx) {
  return std::vector<int>(arr.begin(), arr.begin() + idx + 1);
}

std::vector<int> solution(std::vector<int> arr, std::vector<int> query) {
  int i = 0;
  for (int idx : query) {
    if (i % 2 == 1) {
      arr = removeFront(arr, idx);
    }
    if (i % 2 == 0) {
      arr = removeBack(arr, idx);
    }
    i++;
  }
  return arr;
}

int main() {
  std::vector<int> arr = {0, 1, 2, 3, 4, 5};
  std::vector<int> query = {4, 1, 2};
  std::vector<int> answer = solution(arr, query);
  for (auto num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}