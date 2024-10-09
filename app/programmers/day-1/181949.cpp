// 대소문자 바꿔서 출력하기
#include <iostream>
using namespace std;

const int asciiDiffLowerUpper = 'a' - 'A';

bool isLowerCase(char str){
  if ('a' <= str && str <= 'z')
  {
    return true;
  }
  return false;
}

char lowerCaseToUpperCase(char str){
  return (char)(str - asciiDiffLowerUpper);
}

char upperCaseToLowerCase(char str){
  return (char)(str + asciiDiffLowerUpper);
}

int main()
{
  string str;
  cin >> str;
  for (int i=0; str[i]!='\0'; i++)
  {
    char alphabet = str[i];
    if (isLowerCase(alphabet)){
      str[i] = lowerCaseToUpperCase(alphabet);
    }
    else {
      str[i] = upperCaseToLowerCase(alphabet);
    }
  }
  cout << str << endl;

  return 0;

}