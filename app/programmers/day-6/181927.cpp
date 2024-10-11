// 마지막 두 원소
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list){
  int last_idx = size(num_list) - 1;
  int number = 2*num_list[last_idx];
  if (num_list[last_idx] > num_list[last_idx - 1]){
    number = num_list[last_idx] - num_list[last_idx - 1];
  }
  num_list.push_back(number);
  return num_list;
}

int main(){
  vector<int> num_list = {5, 2, 1, 7, 5};
  num_list = solution(num_list);
  for (auto num: num_list){
    cout << num << endl;
  }
  return 0;
}