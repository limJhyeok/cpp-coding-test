// 1로 만들기
#include <iostream>
#include <vector>

int makeOne(int num) {
  int count = 0;
  while (num != 1) {
    if (num % 2 == 0) {
      num /= 2;
      count++;
    } else if (num % 2 == 1) {
      num = (num - 1) / 2;
      count++;
    }
  }
  return count;
}

int solution(std::vector<int> num_list) {
  int answer = 0;
  for (int i = 0; i < size(num_list); i++) {
    answer += makeOne(num_list[i]);
  }
  return answer;
}

int main() {
  std::vector<int> num_list = {12, 4, 15, 1, 14};
  std::cout << solution(num_list) << std::endl;
}