// 문자열 정수의 합
#include <iostream>

int transformCharToInt(char c){
    return (static_cast<int>(c) - static_cast<int>('0'));
}

int solution(std::string num_str){
    int answer = 0;
    for (char c: num_str){
        answer += transformCharToInt(c);
    }
    return answer;
}

int main(){
    std::string num_str = "1000000";
    std::cout << solution(num_str) << std::endl;
}