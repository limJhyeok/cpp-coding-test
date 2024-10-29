// 꼬리 문자열
#include <iostream>
#include <vector>

std::string solution(std::vector<std::string> str_list, std::string ex){
    std::string answer;
    for (int i = 0; i < size(str_list); i++){
        if (str_list[i].find(ex) == std::string::npos){
            answer += str_list[i];
        }
    }
    return answer;
}


int main(){
    std::vector<std::string> str_list = {
        "abc", "bbc", "cbc"
    };
    std::string ex = "c";
    std::string answer = solution(str_list, ex);
    std::cout << answer << std::endl;
}