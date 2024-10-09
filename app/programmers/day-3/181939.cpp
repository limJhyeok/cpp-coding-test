// 더 크게 합치기
#include <iostream>
#include <vector>
using namespace std;


string solution(vector<string> arr){
  string answer;
  for (auto c: arr){
    answer += c;
  }
  return answer;
  
}


int main(){
  vector<string> arr = {"a", "b", "c"};
  cout << solution(arr);
}