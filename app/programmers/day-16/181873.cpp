// 특정한 문자를 대문자로 바꾸기
#include <iostream>

std::string solution(std::string my_string, std::string alp){
    for (int i = 0; i < size(my_string); i++){
        if (my_string[i] == alp[0]){
            my_string[i] = toupper(my_string[i]);
        }
    }
    return my_string;
}

int main(){
    std::string my_string = "programmers";
    std::string alp = "p";
    std::cout << solution(my_string, alp) << std::endl;
}