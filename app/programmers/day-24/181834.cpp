// l로 만들기
#include <iostream>

std::string solution(std::string myString){
    for (int i = 0; i < size(myString); i++){
        if (myString[i] < 'l'){
            myString[i] = 'l';
        }
    }
    return myString;
}

int main(){
    std::string myString = "abcdevwxyz";
    std::cout << solution(myString) << std::endl;
}