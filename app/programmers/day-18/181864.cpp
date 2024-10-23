// 문자열 바꿔서 찾기
#include <iostream>

std::string transformString(std::string myString){
    for (int i = 0; i < size(myString); i++){
        if (myString[i] == 'A'){
            myString[i] = 'B';
        } else{
            myString[i] = 'A';
        }
    }
    return myString;
}


int solution(std::string myString, std::string pat){
    if (size(myString) < size(pat)){
        return 0;
    }
    myString = transformString(myString);
    for (int i = 0; i <= size(myString) - size(pat); i++){
        std::string slice = myString.substr(i, size(pat));
        if (slice == pat){
            return 1;
        }
    }
    return 0;
}


int main(){
    std::string myString = "ABAB";
    std::string pat = "ABAB";
    std::cout << solution(myString, pat) << std::endl;
}