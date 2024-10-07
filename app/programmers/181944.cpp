// 홀짝 구분하기
#include <iostream>
using namespace std;

bool isEven(int number)
{
  if (number % 2 == 0)
  {
    return true;
  }
  return false;
}

int main()
{
  int number;
  cin >> number;
  if (isEven(number))
  {
    cout << number << " is even";
  }
  else
  {
    cout << number << " is odd";
  }

}