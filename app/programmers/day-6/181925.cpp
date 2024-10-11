// 수 조작하기2
#include <iostream>
#include <vector>
using namespace std;

string solution(vector<int> numLog){
  string answer = "";
  for (int i = 0; i < size(numLog) - 1; i++){
    int control = numLog[i+1] - numLog[i];
    if (control == 1){
      answer += 'w';
    }
    if (control == -1){
      answer += 's';
    }
    if (control == 10){
      answer += 'd';
    }
    if (control == -10){
      answer += 'a';
    }
  }
  return answer;
}

int main(){
  vector<int> numLog = {0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1};
  cout << solution(numLog) << endl;  
}