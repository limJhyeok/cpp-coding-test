// 순서 바꾸기
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> num_list, int n) {
  std::vector<int> right =
      std::vector<int>(num_list.begin() + n, num_list.end());
  std::vector<int> left =
      std::vector<int>(num_list.begin(), num_list.begin() + n);
  right.insert(right.end(), left.begin(), left.end());
  return right;
}

int main() {
  std::vector<int> num_list = {5, 2, 1, 7, 5};
  int n = 3;
  std::vector<int> answer = solution(num_list, n);
  for (auto num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}