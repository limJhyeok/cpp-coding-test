// 카운트업
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int start_num, int end_num){
  vector<int> answer;
  for (int i = start_num; i <= end_num; i++){
    answer.push_back(i);
  }
  return answer;
}

int main(){
  int start_num = 3;
  int end_num = 10;
  vector<int> answer = solution(start_num, end_num);
  for (auto num: answer){
    cout << num << endl;
  }
}