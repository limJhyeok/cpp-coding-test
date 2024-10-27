// 공백으로 구분하기 2
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::string my_string){
    std::string temp = "";
    std::vector<std::string> answer;
    for (int i = 0; i < size(my_string); i++){
        if (my_string[i] == ' '){
            if (size(temp) != 0){
                answer.push_back(temp);
                temp = "";
            }
        }else {
            temp += my_string[i];
        }
    }
    if (size(temp) != 0){
        answer.push_back(temp);
    }
    return answer;
}


int main(){
    std::string my_string = "  programmers";
    std::vector<std::string> answer = solution(my_string);
    for (std::string s: answer){
        std::cout << s << " ";
    }
    std::cout << std::endl;
}
