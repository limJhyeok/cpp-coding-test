// 홀짝에 따라 다른 값 반환하기
#include <iostream>
using namespace std;

int sumOfOdds(int number){
  int n = (number + 1) / 2;
  return n*n;
}

int sumOfEvenSquares(int number){
  int n = number / 2;
  return 4*n*(n+1)*(2*n + 1) / 6;
}

int solution(int n){
  if (n % 2 == 0){
    return sumOfEvenSquares(n);
  }
  return sumOfOdds(n);
}

int main(){
  int n = 7;
  cout << solution(n);
}