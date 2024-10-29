// 주사위 게임 1
#include <iostream>
#include <math.h>

int solution(int a, int b){
    if ((a % 2 == 1) && (b % 2 == 1)){
        return pow(a, 2) + pow(b, 2);
    }
    if ((a % 2 == 0) && (b % 2 == 0)){
        return abs(a-b);
    }
    return 2 * (a + b);
}

int main(){
    int a = 2;
    int b = 4;
    std::cout << solution(a, b) << std::endl;

}