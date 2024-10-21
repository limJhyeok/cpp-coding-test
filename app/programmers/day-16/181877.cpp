// 대문자로 바꾸기
#include <iostream>

std::string solution(std::string myString){
    for (int i = 0; i < size(myString); i++){
        if (islower(myString[i])){
            myString[i] = toupper(myString[i]);
        }
    }
    return myString;
}


int main(){
    std::string myString = "aBcDeFg";
    std::cout << solution(myString) << std::endl;
}