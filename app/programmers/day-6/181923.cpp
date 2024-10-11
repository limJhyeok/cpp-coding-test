// 수열과 구간 쿼리 2
#include <iostream>
#include <vector>

using namespace std;

int getLeastMaximuValue(vector<int> arr, int s, int e, int k){
  int currentLeastMaximumValue = -1;
  bool isExist = false;
  for (int i = s; i <= e; i++){
    if (arr[i] > k){
      if (!isExist){
        isExist = true;
        currentLeastMaximumValue = arr[i];
        continue;
      }
      if (currentLeastMaximumValue > arr[i]){
        currentLeastMaximumValue = arr[i];
      }
    }
  }
  return currentLeastMaximumValue;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries){
  vector<int> answer = {};
  for (int i = 0; i < size(queries); i++){
    int s = queries[i][0];
    int e = queries[i][1];
    int k = queries[i][2];
    answer.push_back(getLeastMaximuValue(arr, s, e, k));
  }
  return answer;
}

int main(){
  vector<int> arr = {0, 1, 2, 4, 3};
  vector<vector<int>> queries = {
    {0, 4, 2}, // [s, e, k] 0 < i < 4 2보다 크면서
    {0, 3, 2},
    {0, 2, 2}
  };
  vector<int> result = solution(arr, queries);
  for (auto num: result){
    cout << num << endl;
  }
}