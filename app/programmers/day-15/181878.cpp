// 원하는 문자열 찾기
#include <iostream>

int solution(std::string myString, std::string pat){
    if (size(myString) < size(pat)){
        return 0;
    }
    std::string lowerString;
    std::string lowerPat;
    for (auto c: myString){
        lowerString += tolower(c);
    }
    for (auto c: pat){
        lowerPat += tolower(c);
    }
    for (int i = 0; i <= size(lowerString) - size(lowerPat); i++){
        std::string lowerStringSlice = lowerString.substr(
            i, size(lowerPat)
        );
        if (lowerStringSlice == lowerPat){
            return 1;
        }
    }
    return 0;
}



int main(){
    std::string myString = "AbCdEfG";
    std::string pat = "efG";
    std::cout << solution(myString, pat) << std::endl;
}