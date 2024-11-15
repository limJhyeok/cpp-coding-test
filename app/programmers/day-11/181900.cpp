// 글자 지우기
#include <algorithm>
#include <iostream>
#include <vector>

std::string solution(std::string my_string, std::vector<int> indicies) {
  std::string answer;
  sort(indicies.begin(), indicies.end());
  int j = 0;
  for (int i = 0; i < size(my_string); i++) {
    if (i == indicies[j]) {
      j++;
      continue;
    }
    answer += my_string[i];
  }
  return answer;
}

int main() {
  std::string my_string = "apporoograpemmemprs";
  std::vector<int> indicies = {1, 16, 6, 15, 0, 10, 11, 3};
  std::cout << solution(my_string, indicies) << std::endl;
}