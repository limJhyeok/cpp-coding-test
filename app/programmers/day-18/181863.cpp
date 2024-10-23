// rny_string
#include <iostream>

std::string solution(std::string rny_string){
    std::string answer;
    for (char c: rny_string){
        if (c == 'm'){
            answer += "rn";
        } else{
            answer += c;
        }
    }
    return answer;
}

int main(){
    std::string rny_string = "programmers";
    std::cout << solution(rny_string) << std::endl;
}