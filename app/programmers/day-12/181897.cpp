// 리스트 자르기
#include <iostream>
#include <vector>

std::vector<int> solution(int n, std::vector<int> slicer,
                          std::vector<int> num_list) {
  int a = slicer[0];
  int b = slicer[1];
  int c = slicer[2];
  if (n == 1) {
    return std::vector<int>(num_list.begin(), num_list.begin() + b + 1);
  }
  if (n == 2) {
    return std::vector<int>(num_list.begin() + a, num_list.end());
  }
  if (n == 3) {
    return std::vector<int>(num_list.begin() + a, num_list.begin() + b + 1);
  }
  if (n == 4) {
    std::vector<int> answer;
    for (int i = a; i <= b; i += c) {
      answer.push_back(num_list[i]);
    }
    return answer;
  }
  return {-1};
}

int main() {
  int n = 2;
  std::vector<int> slicer = {1, 5, 2};
  std::vector<int> num_list = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> answer = solution(n, slicer, num_list);
  for (auto num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}