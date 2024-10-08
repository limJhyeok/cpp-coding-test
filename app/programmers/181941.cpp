// 문자 리스트를 문자열로 변환하기
#include <iostream>
#include <vector>
using namespace std;

string solution(vector<string> arr){
  string str;
  int i = 0;
  for (auto s: arr){
    str += s;
  }
  return str;
}

int main(){
  vector<string> arr = {"a", "b", "c"};
  cout << solution(arr);
}