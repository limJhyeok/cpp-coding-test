// 수 조작하기1
#include <iostream>

using namespace std;

int solution(int n, string control){
  for (auto c: control){
    if (c == 'w'){
      n += 1;
    }
    if (c == 's'){
      n -= 1;
    }
    if (c == 'd'){
      n += 10;
    }
    if (c == 'a'){
      n -= 10;
    }
  }
  return n;
}
int main(){
  int n = 0;
  string control = "wsdawsdassw";
  cout << solution(n, control) << endl;
}