// A 강조하기
#include <iostream>

std::string solution(std::string myString){
    for (int i = 0; i < size(myString); i++){
        if (isupper(myString[i])){
            if (myString[i] != 'A'){
                myString[i] = tolower(myString[i]);
                continue;
            }
        }
        if (myString[i] == 'a'){
            myString[i] = 'A';
        }
    }
    return myString;
}

int main(){
    std::string myString = "abstract algebra";
    std::cout << solution(myString) << std::endl;
}