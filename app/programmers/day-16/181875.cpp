// 배열에서 문자열 대소문자 변환하기
#include <iostream>
#include <vector>

std::string tolowerStrAlphabet(std::string strAlphabet){
    for (int i = 0; i < size(strAlphabet); i++){
        strAlphabet[i] = tolower(strAlphabet[i]);
    }
    return strAlphabet;
}

std::string toupperStrAlphabet(std::string strAlphabet){
    for (int i = 0; i < size(strAlphabet); i++){
        strAlphabet[i] = toupper(strAlphabet[i]);
    }
    return strAlphabet;
}

std::vector<std::string> solution(std::vector<std::string> strArr){
    for (int i = 0; i < size(strArr); i++){
        if (i % 2 == 0){
            strArr[i] = tolowerStrAlphabet(strArr[i]);
        }
        if (i % 2 == 1){
            strArr[i] = toupperStrAlphabet(strArr[i]);
        }
    }
    return strArr;
}

int main(){
    std::vector<std::string> strArr = {
        "AAA","BBB","CCC","DDD"
    };
    std::vector<std::string> answer = solution(strArr);
    for (std::string alphabet: answer){
        std::cout << alphabet << " ";
    }
    std::cout << std::endl;
}