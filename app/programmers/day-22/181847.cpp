// 0 떼기
#include <iostream>

std::string solution(std::string n_str){
    for (int i = 0; i < size(n_str); i++){
        if (n_str[i] != '0'){
            return n_str.substr(i);
        }
    }
    return "";
}

int main(){
    std::string n_str = "0";
    std::cout << solution(n_str) << std::endl;
}