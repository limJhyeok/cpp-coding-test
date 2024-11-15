// 배열 만들기 6
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr) {
  std::vector<int> stk;
  int i = 0;
  while (size(arr) > i) {
    if ((stk.empty()) || (stk.back() != arr[i])) {
      stk.push_back(arr[i]);
      i++;
      continue;
    }
    if (stk.back() == arr[i]) {
      stk.pop_back();
      i++;
    }
  }
  if (stk.empty()) {
    return {-1};
  }
  return stk;
}

int main() {
  std::vector<int> arr = {0, 1, 1, 0};
  std::vector<int> answer = solution(arr);
  for (int num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}