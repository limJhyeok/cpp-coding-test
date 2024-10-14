// 문자열 여러 번 뒤집기
#include <iostream>
#include <vector>
#include <algorithm>

std::string solution(std::string my_string, std::vector<std::vector<int>> queries){
    for (auto query: queries){
        int s = query[0];
        int e = query[1];
        reverse(my_string.begin() + s, my_string.begin() + e + 1);
    }
    return my_string;
}

int main(){
    std::string my_string = "rermgorpsam";
    std::vector<std::vector<int>> queries = {
        {2, 3},
        {0, 7},
        {5, 9},
        {6, 10}
    };
    std::cout << solution(my_string, queries) << std::endl;

}