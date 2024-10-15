// 배열 만들기 2
#include <iostream>
#include <vector>

std::vector<int> solution(int l, int r){
  std::vector<int> answer;
  for (int i = l; i <= r; i++){
    std::string strInt = std::to_string(i);
    bool isOnlyFiveAndZero = true;
    for (int i = 0; i < size(strInt); i++){
      if (strInt[i] != '5'){
        if (strInt[i] != '0'){
          isOnlyFiveAndZero = false;
          break;
        }
      }
      if (strInt[i] != '5'){
        if (strInt[i] != '0'){
          isOnlyFiveAndZero = false;
          break;
        }
      }
    }
    if (isOnlyFiveAndZero == true){
      answer.push_back(std::stoi(strInt));
    }
  }
  if (size(answer) == 0){
    return {-1};
  }
  return answer;
}

int main(){
  int l = 10;
  int r = 20;
  std::vector<int> answer = solution(l, r);
  for (auto num: answer){
    std::cout << num << std::endl;
  }
}