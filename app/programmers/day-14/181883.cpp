// 수열과 구간 쿼리 1
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr,
                          std::vector<std::vector<int>> queries) {
  for (std::vector<int> query : queries) {
    int s = query[0];
    int e = query[1];
    for (int i = s; i <= e; i++) {
      arr[i] += 1;
    }
  }
  return arr;
}

int main() {
  std::vector<int> arr = {0, 1, 2, 3, 4};
  std::vector<std::vector<int>> queries = {{0, 1}, {1, 2}, {2, 3}};
  std::vector<int> answer = solution(arr, queries);
  for (int n : answer) {
    std::cout << n << " ";
  }
  std::cout << std::endl;
}