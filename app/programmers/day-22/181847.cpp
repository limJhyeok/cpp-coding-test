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

std::string anotherSolution(std::string n_str) {
    std::string answer = std::to_string(stoi(n_str));
    return answer;
}

int main(){
    std::string n_str = "854020";
    std::cout << solution(n_str) << std::endl;
}