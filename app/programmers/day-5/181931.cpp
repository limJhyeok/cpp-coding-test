#include <iostream>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included){
  int result = 0;
  for (int i = 0; i < size(included); i++){
    if (included[i]){
      result += (a + i*d);
    }
  }
  return result;
}

int main(){
  int a = 3;
  int d = 4;
  vector<bool> included = {true, false, false, true, true};
  
  cout << solution(a, d, included);
}