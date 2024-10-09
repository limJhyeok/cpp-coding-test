// 두 수의 연산값 비교하기
#include <iostream>
using namespace std;

int crossCalculator(int a, int b){
  string result = to_string(a) + to_string(b);
  return stoi(result);
}

int doubleMultiplyCalculator(int a, int b){
  return 2*a*b;
}

int solution(int a, int b){
  return max(crossCalculator(a, b), doubleMultiplyCalculator(a, b));
}

int main(){
  int a = 91;
  int b = 2;
  cout << solution(a, b);
}