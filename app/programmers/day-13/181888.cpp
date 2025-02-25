// n개 간격의 원소들
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> num_list, int n) {
  std::vector<int> answer;
  for (int i = 0; i < size(num_list); i += n) {
    answer.push_back(num_list[i]);
  }
  return answer;
}

int main() {
  std::vector<int> num_list = {4, 2, 6, 1, 7, 6};
  int n = 4;
  std::vector<int> answer = solution(num_list, n);
  for (int n : answer) {
    std::cout << n << " ";
  }
  std::cout << std::endl;
}