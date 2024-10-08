// 더 크게 합치기
#include <iostream>
using namespace std;

int newCalculator(int a, int b){
  string result = to_string(a) + to_string(b);
  return stoi(result);
}

int solution(int a, int b){
  int answer = 0;
  int candidate1 = newCalculator(a, b);
  int candidate2 = newCalculator(b, a);
  answer = max(candidate1, candidate2);
  return answer;
}

int main(){
  int a = 89;
  int b = 8;
  cout << solution(a, b);
}