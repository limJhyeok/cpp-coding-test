// 배열 만들기 4
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
  int i = 0;
  vector<int> stk;
  while (i < size(arr)) {
    size_t stkSize = size(stk);
    bool isEmpty = (stkSize == 0);
    bool isLastLessThanArr = (stk[stkSize - 1] < arr[i]);
    if (isEmpty || isLastLessThanArr) {
      stk.push_back(arr[i]);
      i++;
      continue;
    }
    stk.pop_back();
  }
  return stk;
}

int main() {
  vector<int> arr = {1, 4, 2, 5, 3};
  vector<int> stk = solution(arr);
  for (auto num : stk) {
    cout << num << endl;
  }
}