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

int myMax(int a, int b){
  if (a >= b){
    return a;
  }
  return b;
}

int solution(int a, int b){
  int answer = 0;
  int crossResult= crossCalculator(a, b);
  int doubleMultiplyResult = doubleMultiplyCalculator(a, b); 
  answer = myMax(crossResult, doubleMultiplyResult);
  return answer;
}

int main(){
  int a = 2;
  int b = 91;
  cout << solution(a, b);
}