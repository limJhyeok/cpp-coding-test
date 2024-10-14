// 간단한 논리 연산
#include <iostream>

bool solution(bool x1, bool x2, bool x3, bool x4){
    return (x1 || x2) && (x3 || x4);
}
int main(){
    bool x1 = false;
    bool x2 = true;
    bool x3 = true;
    bool x4 = true;
    std::cout << std::boolalpha;
    std::cout << solution(x1, x2, x3, x4) << std::endl;
}