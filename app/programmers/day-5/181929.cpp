#include <iostream>
#include <vector>
#include <math.h>

int solution(std::vector<int> num_list){
  int multiply = 1;
  int sumOfSquare = 0;
  for (auto num: num_list){
    multiply *= num;
    sumOfSquare += num;
  }
  sumOfSquare *= sumOfSquare;
  return multiply < sumOfSquare;
}

int main(){
  std::vector<int> num_list = {5, 7, 8, 3};
  std::cout << solution(num_list);
}