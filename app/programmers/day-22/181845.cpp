#include <iostream>

std::string solution(int n){
    return std::to_string(n);
}

int main(){
    int n = 100000;
    std::cout << solution(n) << std::endl;
}