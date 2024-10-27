// 문자열을 정수로 변환하기
#include <iostream>

int solution(std::string n_str){
    return std::stoi(n_str);
}

int main(){
    std::string n_str = "10";
    std::cout << solution(n_str) << std::endl;
}