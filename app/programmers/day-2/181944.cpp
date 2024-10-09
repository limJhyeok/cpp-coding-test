// 홀짝 구분하기
#include <iostream>
using namespace std;

bool isEven(int number){
  if (number % 2 == 0){
    return true;
  }
  return false;
}

int main(){
  int n;
  cin >> n;
  if (isEven(n)){
    cout << n << " is even";
  }
  else {
    cout << n << " is odd";
  }
}