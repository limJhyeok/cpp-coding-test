// 부분 문자열 이어 붙여 문자열 만들기
#include <iostream>
#include <vector>

std::string solution(std::vector<std::string> my_strings, std::vector<std::vector<int>> parts){
    std::string answer;
    for (int i = 0; i < size(my_strings); i++){
        int s = parts[i][0];
        int e = parts[i][1];
        answer += my_strings[i].substr(s, e - s + 1);
    }
    return answer;
}

int main(){
    std::vector<std::string> my_strings ={
        "progressive", "hamburger", "hammer", "ahocorasick"
    };
    std::vector<std::vector<int>> parts = {
        {0, 4},
        {1, 2},
        {3, 5},
        {7, 7}
    };
    std::cout << solution(my_strings, parts) << std::endl;
}