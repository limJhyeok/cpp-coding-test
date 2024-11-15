// 문자 개수 세기
#include <iostream>
#include <vector>

std::vector<int> solution(std::string my_string) {
  std::vector<int> answer(52, 0);
  for (char c : my_string) {
    int i;
    if (isupper(c)) {
      i = static_cast<int>(c) - static_cast<int>('A');
    }
    if (islower(c)) {
      i = (static_cast<int>(c) - static_cast<int>('a')) +
          (static_cast<int>('Z') - static_cast<int>('A')) + 1;
    }
    answer[i] += 1;
  }
  return answer;
}
int main() {
  std::string my_string = "Programmers";
  std::vector<int> answer = solution(my_string);
  for (auto num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}