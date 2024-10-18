// 왼쪽 오른쪽
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> str_list){
    for (int i = 0; i < size(str_list); i++){
        if (str_list[i] == "l"){
            return std::vector<std::string>(str_list.begin(), str_list.begin() + i);
        }
        if (str_list[i] == "r"){
            return std::vector<std::string>(str_list.begin() + i + 1, str_list.end());
        }
    }
    return {};
}

int main(){
    std::vector<std::string> str_list = {"l"};
    std::vector<std::string> answer = solution(str_list);
    for (auto c: answer){
        std::cout << c << " ";
    }
    std::cout << std::endl;
}
