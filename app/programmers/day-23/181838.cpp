// 날짜 비교하기
#include <iostream>
#include <vector>

int solution(std::vector<int> date1, std::vector<int> date2){
    std::string date1_str;
    std::string date2_str;
    for (int i = 0; i < size(date1); i++){
        date1_str += std::to_string(date1[i]);
        date2_str += std::to_string(date2[i]);
    }
    if (stoi(date1_str) < stoi(date2_str)){
        return 1;
    }
    return 0;
}
int main(){
    std::vector<int> date1 = {
        1024, 10, 24
    };
    std::vector<int> date2 = {
        1024, 10, 24
    };
    std::cout << solution(date1, date2) << std::endl;
}