// 문자열 겹쳐쓰기
#include <iostream>
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    // string answer = "";
    int i = 0;
    while (true)
    {
      if (overwrite_string[i] == '\0')
      {
        break;
      }
      my_string[s] = overwrite_string[i];
      i++;
      s++;
    }
    return my_string;
}

int main()
{
  string my_string = "He11oWor1d";
  string overwrite_string = "lloWorl";
  int s = 2;
  int j = 0;
  while (true)
  {
    if (overwrite_string[j] == '\0')
    {
      break;
    }
    my_string[s] = overwrite_string[j];
    j++;
    s++;
  }
  cout << my_string;
}