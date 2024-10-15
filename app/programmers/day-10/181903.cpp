// qr code
#include <iostream>

std::string solution(int q, int r, std::string code){
    std::string answer;
    for (int i = 0; i < size(code); i++){
        if (i%q == r){
            answer += code[i];
        }
    }
    return answer;
}

int main(){
    int q = 1;
    int r = 0;
    std::string code = "programmers";
    std::cout << solution(q, r, code) << std::endl;
}