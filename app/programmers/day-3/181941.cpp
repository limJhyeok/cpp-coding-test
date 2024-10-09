// 문자 리스트를 문자열로 변환하기
#include <iostream>
using namespace std;

int crossCalculator(int a, int b){
  string result = to_string(a) + to_string(b);
  return stoi(result);
}

int solution(int a, int b){
  return max(crossCalculator(a, b), crossCalculator(b, a)); 
}

int main(){
  int a = 9;
  int b = 91;
  cout << solution(a, b);
}