// 세로 읽기
#include <iostream>

std::string solution(std::string my_string, int m, int c){
    std::string answer;
    for (int i = 0; i<size(my_string); i = i + m){
        answer += my_string[i + c - 1];
    }
    return answer;
}

int main(){
    std::string my_string = "programmers";
    int m = 1;
    int c = 1;
    std::cout << solution(my_string, m, c) << std::endl;
}