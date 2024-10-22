// ad 제거하기
#include <iostream>
#include <vector>

bool isPatternExist(std::string str, std::string pattern){
    if (size(str) < size(pattern)){
        return false;
    }
    for (int i = 0; i <= size(str) - size(pattern); i++){
        if (str.substr(i, size(pattern)) == pattern){
            return true;
        }
    }
    return false;
}

std::vector<std::string> solution(std::vector<std::string> strArr){
    std::string pattern = "ad";
    std::vector<std::string> answer;
    for (std::string str: strArr){
        if (!isPatternExist(str, pattern)){
            answer.push_back(str);
        }
    }
    return answer;
}

int main(){
    std::vector<std::string> strArr = {
        "there","are","no","a","ds"
    };
    std::vector<std::string> answer = solution(strArr);
    for (std::string str: answer){
        std::cout << str << " ";
    }
    std::cout << std::endl;
}