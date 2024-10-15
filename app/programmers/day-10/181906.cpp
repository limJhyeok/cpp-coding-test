// 접두사인지 확인하기
#include <iostream>

int solution(std::string my_string, std::string is_prefix){
    size_t prefixSize = size(is_prefix);
    if (my_string.substr(0, prefixSize) == is_prefix){
        return 1;
    }
    return 0;
}

int main(){
    std::string my_string = "banana";
    std::string is_prefix = "abcd";
    std::cout << solution(my_string, is_prefix) << std::endl;
}