// 수열과 구간 쿼리 4
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
  for (auto query : queries) {
    int s = query[0];
    int e = query[1];
    int k = query[2];
    for (int i = s; i <= e; i++) {
      if (i % k == 0) {
        arr[i] += 1;
      }
    }
  }
  return arr;
}

int main() {
  vector<int> arr = {0, 1, 2, 4, 3};
  vector<vector<int>> queries = {{0, 4, 1}, {0, 3, 2}, {0, 3, 3}};
  arr = solution(arr, queries);
  for (auto num : arr) {
    cout << num << endl;
  }

  return 0;
}