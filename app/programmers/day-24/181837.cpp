// 커피 심부름
#include <iostream>
#include <unordered_map>
#include <vector>

int solution(std::vector<std::string> order) {
  std::unordered_map<std::string, int> menu;
  menu["iceamericano"] = 4500;
  menu["americanoice"] = 4500;
  menu["hotamericano"] = 4500;
  menu["americanohot"] = 4500;
  menu["americano"] = 4500;
  menu["anything"] = 4500;

  menu["icecafelatte"] = 5000;
  menu["cafelatteice"] = 5000;
  menu["hotcafelatte"] = 5000;
  menu["cafelattehot"] = 5000;
  menu["cafelatte"] = 5000;

  int answer = 0;
  for (std::string s : order) {
    answer += menu[s];
  }

  return answer;
}
int main() {
  std::vector<std::string> order = {"cafelatte", "americanoice", "hotcafelatte",
                                    "anything"};
  std::cout << solution(order) << std::endl;
}