// 문자열 겹쳐쓰기
#include <iostream>
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
  for (auto c : overwrite_string) {
    my_string[s] = c;
    s++;
  }
  return my_string;
}

int main() {
  string my_string = "He11oWor1d";
  string overwrite_string = "lloWorl";
  int s = 2;
  cout << solution(my_string, overwrite_string, s);
}