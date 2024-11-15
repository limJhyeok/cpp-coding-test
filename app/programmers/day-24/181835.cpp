// 조건에 맞게 수열 변환하기 3
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr, int k) {
  if (k % 2 == 1) {
    for (int i = 0; i < size(arr); i++) {
      arr[i] *= k;
    }
    return arr;
  }
  for (int i = 0; i < size(arr); i++) {
    arr[i] += k;
  }
  return arr;
}

int main() {
  std::vector<int> arr = {1, 2, 3, 100, 99, 98};
  int k = 3;

  std::vector<int> answer = solution(arr, k);

  for (int num : answer) {
    std::cout << num << std::endl;
  }
}