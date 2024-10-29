// 부분 문자열
#include <iostream>

int solution(std::string str1, std::string str2){
    if (size(str1) > size(str2)){
        return 0;
    }
    for (int i = 0; i <= size(str2) - size(str1); i++){
        if (str2.substr(i, size(str1)) == str1){
            return 1;
        }
    }
    return 0;
}

int main(){
    std::string str1 = "tbt";
    std::string str2 = "tbbttb";
    std::cout << solution(str1, str2) << std::endl;
}