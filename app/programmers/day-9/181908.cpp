// 접미사인지 확인하기
#include <iostream>
#include <vector>

std::vector<std::string> getSuffix(std::string my_string){
    std::vector<std::string> suffix;
    for (int i = 0; i < size(my_string); i++){
        suffix.push_back(my_string.substr(i));
    }
    return suffix;
}

int solution(std::string my_string, std::string is_suffix){
    std::vector<std::string> suffix = getSuffix(my_string);
    for (auto str: suffix){
        if (str == is_suffix){
            return true;
        }
    }
    return false;
}

int main(){
    std::string my_string = "banana";
    std::string is_suffix = "wxyz";
    std::cout << solution(my_string, is_suffix) << std::endl;
}