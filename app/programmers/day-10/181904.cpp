// 세로 읽기
#include <iostream>

std::string solution(std::string my_string, int m, int c){
    std::string answer;
    for (int i = c; i <= size(my_string); i = i + m){
        answer += my_string[i - 1];
    }
    return answer;
}

int main(){
    std::string my_string = "ihrhbakrfpndopljhygc";
    int m = 4;
    int c = 2;
    std::cout << solution(my_string, m, c) << std::endl;
}