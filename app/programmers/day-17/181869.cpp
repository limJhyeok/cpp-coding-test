// 공백으로 구분하기 1
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::string my_string){
    int prev = 0;
    std::vector<std::string> answer;
    for (int i = 0; i < size(my_string); i++){
        if (my_string[i] == ' '){
            std::string str = my_string.substr(prev, i - prev);
            answer.push_back(str);
            prev = i + 1;
        }
    }
    std::string lastString = my_string.substr(prev, size(my_string) - prev);
    answer.push_back(lastString);
    return answer;
}

int main(){
    std::string my_string = "programmers";
    std::vector<std::string> answer = solution(my_string);
    for (std::string str: answer){
        std::cout << str << " ";
    }
    std::cout << std::endl;
}