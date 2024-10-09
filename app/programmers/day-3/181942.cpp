// 문자열 섞기
#include <iostream>
#include <string>
using namespace std;

string solution(string str1, string str2){
  size_t strSize = str1.size();
  string answer;
  for (int i =0; i < strSize; i++){
    answer += str1[i];
    answer += str2[i];
  }
  return answer;
}

int main(){
  string str1 = "aaaaa";
  string str2 = "bbbbb";
  cout << solution(str1, str2);
}