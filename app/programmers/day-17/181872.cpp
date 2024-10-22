// 특정 문자열로 끝나는 가장 긴 부분 문자열 찾기
#include <iostream>

std::string solution(std::string myString, std::string pat){
    size_t myStringSize = size(myString);
    for (int i = myStringSize; i >= 0; i--){
        std::string myStringSlice = myString.substr(i - size(pat), size(pat));
        if (myStringSlice == pat){
            return myString.substr(0, i);
        }
    }
    return "";
}


int main(){
    std::string myString = "AAAAaaaa";
    std::string pat = "a";
    std::cout << solution(myString, pat) << std::endl;
}