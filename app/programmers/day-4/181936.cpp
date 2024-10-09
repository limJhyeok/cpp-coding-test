// 공배수
#include <iostream>
using namespace std;

int solution(int number, int n, int m){
  return ((number % n == 0) && (number % m == 0));
}

int main(){
  int number = 55;
  int n = 10;
  int m = 5;
  cout << solution(number, n, m);
}