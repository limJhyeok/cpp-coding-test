// 9로 나눈 나머지
#include <iostream>
#include <string>
using namespace std;

int solution(string number){
    int sum = 0;
    for (char c: number){
        sum += (static_cast<int>(c) - static_cast<int>('0'));
    }
    return sum % 9;
}
int main(){
    string number = "78720646226947352489";
    cout << solution(number);
}