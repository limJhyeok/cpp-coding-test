// 배열의 길이를 2의 거듭제곱으로 만들기
#include <math.h>

#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr) {
  float powerOfTwo = std::log(size(arr)) / std::log(2);
  if (floor(powerOfTwo) == powerOfTwo) {
    return arr;
  }
  std::vector<int> surplus =
      std::vector<int>(pow(2, ceil(powerOfTwo)) - size(arr), 0);
  arr.insert(arr.end(), surplus.begin(), surplus.end());
  return arr;
}

int main() {
  std::vector<int> arr = {58, 172, 746, 89};
  std::vector<int> answer = solution(arr);

  for (int num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}