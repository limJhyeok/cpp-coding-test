// 수열과 구간 쿼리 3
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries){
  int temp;
  for (int i = 0; i < size(queries); i++){
    int prevIdx = queries[i][0];
    for (int j = 1; j < size(queries[i]); j++){
      int idx = queries[i][j];
      temp = arr[idx];
      arr[idx] = arr[prevIdx];
      arr[prevIdx] = temp;
      prevIdx = idx;
    }
  }
  return arr;
}

int main(){
  vector<int> arr = {0, 1, 2, 3, 4};
  vector<vector<int>> queries = {
    {0, 3},
    {1, 2},
    {1, 4}
  };
  
  arr = solution(arr, queries);
  for (auto num: arr){
    cout << num << endl;
  }
}