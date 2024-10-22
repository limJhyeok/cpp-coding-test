// 배열에서 문자열 대소문자 변환하기
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> solution(std::vector<std::string> strArr){
    for (int i = 0; i < size(strArr); i += 2){
        std::string strElem = strArr[i];
        std::transform(strElem.begin(), strElem.end(), strElem.begin(), ::tolower);
        strArr[i] = strElem;
    }
    for (int i = 1; i < size(strArr); i += 2){
        std::string strElem = strArr[i];
        std::transform(strElem.begin(), strElem.end(), strElem.begin(), ::toupper);
        strArr[i] = strElem;
    }
    return strArr;
}

int main(){
    std::vector<std::string> strArr = {
        "aBc","AbC"
    };

    std::vector<std::string> answer = solution(strArr);
    for (std::string str: answer){
        std::cout << str << " ";
    }
    std::cout << std::endl;

}