// 5명씩
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> names){
    std::vector<std::string> answer;
    for (int i = 0; i < size(names); i += 5){
        answer.push_back(names[i]);
    }
    return answer;
}

int main(){
    std::vector<std::string> names = {
        "nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"
    };
    std::vector<std::string> answer = solution(names);
    for (std::string name: answer){
        std::cout << name << " ";
    }
    std::cout << std::endl;
}