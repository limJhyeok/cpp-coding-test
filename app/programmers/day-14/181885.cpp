// 할 일 목록
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> todo_list, std::vector<bool> finished){
    std::vector<std::string> answer;
    for (int i = 0; i < size(finished); i++){
        if (!finished[i]){
            answer.push_back(todo_list[i]);
        }
    }
    return answer;
}

int main(){
    std::vector<std::string> todo_list = {
        "problemsolving", "practiceguitar", "swim", "studygraph"
    };
    std::vector<bool> finished = {
        true, false, true, false
    };
    std::vector<std::string> answer = solution(todo_list, finished);
    for (std::string todo: answer){
        std::cout << todo << " ";
    }
    std::cout << std::endl;
}