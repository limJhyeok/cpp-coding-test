// 콜라츠 수열 만들기
#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int n){
  vector<int> answer = {n};
  if (n == 1){
    return answer;
  }
  while (true){
    if (n == 1){
      return answer;
    }
    if (n % 2 == 0){
      n /= 2;
      answer.push_back(n);
    }
    else {
      n = 3*n + 1;
      answer.push_back(n);
    }
  }
}

int main(){
  int n = 10;
  vector<int> answer = solution(n);
  for (auto num: answer){
    cout << num << endl;
  }
}