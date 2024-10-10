#include <iostream>
#include <vector>


int solution(std::vector<int> num_list){
  std::string evens="";
  std::string odds="";
  for (auto num: num_list){
    if (num % 2 == 0){
      evens += std::to_string(num);
      continue;
    }
    odds += std::to_string(num);
  }
  return std::stoi(evens) + std::stoi(odds);  
}

int main(){
  std::vector<int> num_list = {5, 7, 8, 3};
  std::cout << solution(num_list);
}