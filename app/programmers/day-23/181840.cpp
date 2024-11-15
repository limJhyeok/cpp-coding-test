// 정수 찾기
#include <iostream>
#include <vector>

int solution(std::vector<int> num_list, int n) {
  for (int num : num_list) {
    if (num == n) {
      return 1;
    }
  }
  return 0;
}

int main() {
  std::vector<int> num_list = {15, 98, 23, 2, 15};
  int n = 20;
  std::cout << solution(num_list, n) << std::endl;
}