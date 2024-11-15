// 꼬리 문자열
#include <iostream>
#include <vector>

bool isSubstr(std::string original, std::string compare);
std::string solution(std::vector<std::string> str_list, std::string ex);

int main() {
  std::vector<std::string> str_list = {"abc", "def", "ghi"};
  std::string ex = "ef";

  std::cout << solution(str_list, ex) << std::endl;
}
bool isSubstr(std::string original, std::string compare) {
  if (size(original) < size(compare)) return false;
  for (int i = 0; i <= size(original) - size(compare); i++) {
    std::string orig_substr = original.substr(i, size(compare));
    if (orig_substr == compare) {
      return true;
    }
  }
  return false;
}

std::string solution(std::vector<std::string> str_list, std::string ex) {
  std::string answer;
  for (std::string str : str_list) {
    if (isSubstr(str, ex)) {
      continue;
    }
    answer += str;
  }
  return answer;
}