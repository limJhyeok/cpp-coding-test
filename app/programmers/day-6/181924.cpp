// 수열과 구간 쿼리 3
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
  for (auto vec : queries) {
    for (int i = 0; i < size(vec) - 1; i++) {
      int temp = arr[vec[i]];
      arr[vec[i]] = arr[vec[i + 1]];
      arr[vec[i + 1]] = temp;
    }
  }
  return arr;
}

int main() {
  vector<int> arr = {0, 1, 2, 3, 4};
  vector<vector<int>> queries = {{0, 3}, {1, 2}, {1, 4}};
  vector<int> answer = solution(arr, queries);
  for (auto num : answer) {
    cout << num << endl;
  }
  return 0;
}