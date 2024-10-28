// 부분 문자열인지 확인하기
#include <iostream>

int solution(std::string my_string, std::string target){
    if (size(my_string) < size(target)){
        return 0;
    }
    for (int i = 0; i <= size(my_string) - size(target); i++){
        std::string mySubstr = my_string.substr(i, size(target));
        if (mySubstr == target){
            return 1;
        } 
    }
    return 0;
}

int main(){
    std::string my_string = "banana";
    std::string target = "wxyz";
    std::cout << solution(my_string, target) << std::endl;
}