// 문자열 반복해서 출력하기
#include <iostream>
using namespace std;

int main()
{
  string str;
  int n;

  cin >> str >> n;
  for (int i = 0; i<n; i++)
  {
    cout << str;
  }
  
  return 0;
}