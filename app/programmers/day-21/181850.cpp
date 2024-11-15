// 정수 부분
#include <math.h>

#include <iostream>

int solution(double flo) { return floor(flo); }

int main() {
  double flo = 1.42;
  std::cout << solution(flo) << std::endl;
}