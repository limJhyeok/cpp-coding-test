// 수열과 구간 쿼리 2
#include <iostream>
#include <vector>
using namespace std;

int getLeastGreaterValue(int s, int e, int k, vector<int> arr){
  int leastGreaterValue = -1;
  bool isExist = false;
  for (int i = s; i <= e; i++){
    if (arr[i] > k){
      if (!isExist){
        leastGreaterValue = arr[i];
        isExist=true;
        continue;
      }
      if (leastGreaterValue > arr[i]){
        leastGreaterValue=arr[i];
      }
    }
  }
  return leastGreaterValue;
}

vector<int> solution(vector<int> arr, vector<vector<int>> queries){
  vector<int> answer;
  for (auto vec: queries){
    int s = vec[0];
    int e = vec[1];
    int k = vec[2];
    int leastGreaterValue = getLeastGreaterValue(s, e, k, arr);
    answer.push_back(leastGreaterValue);
  }
  return answer;
}

int main(){
  vector<int> arr = {0, 1, 2, 4, 3};
  vector<vector<int>> queries = {
    {0, 4, 2},
    {0, 3, 2},
    {0, 2, 2}
  };
  vector<int> answer = solution(arr, queries);
  for (auto num: answer){
    cout << num << endl;
  }
}