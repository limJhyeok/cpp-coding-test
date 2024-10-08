// 문자열 곱하기
#include <iostream>
using namespace std;

string solution(string my_string, int k){
  string answer;
  for (int i=0; i<k; i++){
    answer += my_string;
  }
  return answer;
}


int main(){
  string my_string = "string";
  int k = 3;
  cout << solution(my_string, k);
}