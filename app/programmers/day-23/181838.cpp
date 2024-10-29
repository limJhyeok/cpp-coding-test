// 날짜 비교하기
#include <iostream>
#include <vector>

int solution(std::vector<int> date1, std::vector<int> date2){
    std::string date1Str = std::to_string(date1[0]) + std::to_string(date1[1]) + std::to_string(date1[2]);
    std::string date2Str = std::to_string(date2[0]) + std::to_string(date2[1]) + std::to_string(date2[2]);
    return (std::stoi(date1Str) < std::stoi(date2Str)) ? 1 : 0;
}

int main(){
    std::vector<int> date1 = {1024, 10, 24};
    std::vector<int> date2 = {1024, 10, 24};
    std::cout << solution(date1, date2) << std::endl;
}