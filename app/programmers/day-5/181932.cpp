// 코드 처리하기
#include <iostream>
using namespace std;

string getChangedMode(string mode){
  if (mode == "1"){
    return "0";
  }
  return "1";
}

string solution(string code){
  string ret = "";
  string mode = "0";

  for (int idx = 0; idx < code.size(); idx++){
    if (code[idx] == '1'){
      mode = getChangedMode(mode);
      continue;
    }
    if ((mode == "0") && (idx % 2 == 0)){
      ret += code[idx];
    }
    if ((mode == "1") && (idx % 2 == 1)){
      ret += code[idx];
    }
  }
  if (ret == ""){
    return "EMPTY";
  }
  return ret;
}

int main(){
  string code = "abc1abc1abc";
  cout << solution(code);
  return 0;
}