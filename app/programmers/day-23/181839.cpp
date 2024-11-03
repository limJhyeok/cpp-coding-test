// 주사위 게임 1
#include <iostream>
#include <math.h>
bool isOdd(int num){
    if (num % 2 == 1){
        return true;
    }
    return false;
}

int solution(int a, int b){
    if (isOdd(a) && isOdd(b)) return pow(a, 2) + pow(b, 2);
    if (!isOdd(a) && !isOdd(b)) return abs(a - b);
    return 2 * (a + b);
}

int main(){
    int a = 2;
    int b = 4;
    std::cout << solution(a, b) << std::endl;
}