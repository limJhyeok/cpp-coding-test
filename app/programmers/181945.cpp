// 문자열 돌리기
#include <iostream>
using namespace std;

int main()
{
  string str;
  cin >> str;

  for (int i = 0; str[i] != '\0'; i++)
  {
    cout << str[i] << endl;
  }

}