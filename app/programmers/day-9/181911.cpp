#include <iostream>
#include <string>
#include <vector>

std::string solution(std::vector<std::string> my_strings, std::vector<std::vector<int>> parts){
    int i = 0;
    std::string answer;
    for (auto part: parts){
        int s = part[0];
        int e = part[1];
        std::string subString = my_strings[i].substr(s, e - s + 1);
        answer += subString;
        i++;
    }
    return answer;
}

int main(){
    std::vector<std::string> my_strings = {
        "progressive", "hamburger", "hammer", "ahocorasick"
    };
    std::vector<std::vector<int>> parts = {
        {0, 4},
        {1, 2},
        {3, 5},
        {7, 7}
    };
    std::string answer = solution(my_strings, parts);
    std::cout << answer << std::endl;
    return 0;
}