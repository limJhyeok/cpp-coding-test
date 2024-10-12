// 배열 만들기 4
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr){
  vector<int> stk;
  int i = 0;
  while (true){
    if (i >= size(arr)){
      return stk;
    }

    size_t num_stk = size(stk);
    if (size(stk) == 0){
      stk.push_back(arr[i]);
      i++;
      continue;
    }
    if (stk[num_stk - 1] < arr[i]){
      stk.push_back(arr[i]);
      i++;
      continue;
    }
    if (stk[num_stk - 1] >= arr[i]){
      stk.pop_back();
    }
  }
}

int main(){
  vector<int> arr = {1, 4, 2, 5, 3};
  vector<int> stk = solution(arr);
  for (auto num: stk){
    cout << num << endl;
  }
}