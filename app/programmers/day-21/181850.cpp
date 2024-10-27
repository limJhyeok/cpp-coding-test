// 정수 부분
#include <iostream>
#include <vector>
#include <math.h>

int solution(double flo){
    return floor(flo);
}

int main(){
    double flo = 1.42;
    std::cout << solution(flo) << std::endl;
}