// 글자 이어 붙여 문자열 만들기
#include <iostream>
#include <vector>

std::string solution(std::string my_string, std::vector<int> index_list) {
  std::string answer;
  for (auto index : index_list) {
    answer += my_string[index];
  }
  return answer;
}

int main() {
  std::string my_string = "zpiaz";
  std::vector<int> index_list = {1, 2, 0, 0, 3};
  std::cout << solution(my_string, index_list) << std::endl;
}