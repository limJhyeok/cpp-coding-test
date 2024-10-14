#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> solution(std::string my_string){
    std::vector<std::string> answer;
    for (int i = 0; i < size(my_string); i++){
        answer.push_back(my_string.substr(i));
    }
    sort(answer.begin(), answer.end());
    return answer;
}

int main(){
    std::string my_string = "programmers";
    for (auto str: solution(my_string)){
        std::cout << str << std::endl;
    }
}