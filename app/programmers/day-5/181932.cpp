// 코드 처리하기
#include <iostream>
using namespace std;

int getChangedMode(int mode){
  if (mode == 1){
    return 0;
  }
  return 1;
}

string solution(string code){
  int mode = 0;
  string ret = "";
  for (int i = 0; i < size(code); i++){
    if (code[i] == '1'){
      mode = getChangedMode(mode);
      continue;
    }
    if ((mode == 1) && (i % 2 == 1)){
      ret += code[i];
      continue;
    }
    if ((mode == 0) && (i % 2 == 0)){
      ret += code[i];
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
}