// 공백으로 구분하기 2
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::string my_string){
    std::string word;
    std::vector<std::string> answer;
    for (char c: my_string){
        if (c == ' '){
            if (word != ""){
                answer.push_back(word);
                word = "";
            }
        }else{
            word += c;
        }
    }
    if (word != ""){
        answer.push_back(word);
    }
    return answer;
}

int main(){
    std::string my_string = " i    love  you";
    std::vector<std::string> answer = solution(my_string);
    for (std::string str: answer){
        std::cout << str << ", ";
    }
    std::cout << std::endl;
}