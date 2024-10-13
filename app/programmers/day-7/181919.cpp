// 콜라츠 수열 만들기
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int n){
  vector<int> answer = {n};
  if (n == 1){return answer;}
  while (n != 1){
    if (n % 2 == 0){
      n /= 2;
      answer.push_back(n);
      continue;
    }
    n = 3*n + 1;
    answer.push_back(n);
  }
  return answer;
}

int main(){
  int n = 10;
  vector<int> answer = solution(n);
  for (auto num: answer){
    cout << num << endl;
  }
  return 0;
}