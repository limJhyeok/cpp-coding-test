// 문자열이 몇 번 등장하는지 세기
#include <iostream>

int solution(std::string myString, std::string pat){
    int count = 0;
    for (int i = 0; i <= size(myString) - size(pat); i++){
        std::string mySubstr = myString.substr(i, size(pat));
        if (mySubstr == pat){
            count ++;
        }
    }
    return count;
}

int main(){
    std::string myString = "aaaa";
    std::string pat = "aa";
    std::cout << solution(myString, pat) << std::endl;
}