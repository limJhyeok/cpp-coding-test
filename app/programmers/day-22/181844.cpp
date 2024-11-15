// 배열의 원소 삭제하기
#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> solution(std::vector<int> arr, std::vector<int> delete_list) {
  std::vector<int> answer;
  std::unordered_map<int, bool> shouldDelete;
  for (int num : delete_list) {
    shouldDelete[num] = true;
  }
  for (int num : arr) {
    if (shouldDelete[num]) continue;
    answer.push_back(num);
  }
  return answer;
}

int main() {
  std::vector<int> arr = {110, 66, 439, 785, 1};
  std::vector<int> delete_list = {377, 823, 119, 43};
  std::unordered_map<int, bool> shouldDelete;
  std::vector<int> answer = solution(arr, delete_list);

  for (int num : answer) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}