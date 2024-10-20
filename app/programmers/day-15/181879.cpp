// 길이에 따른 연산
#include <iostream>
#include <vector>

int solution(std::vector<int> num_list){
    if (size(num_list) >= 11){
        int answer = 0;
        for (auto num: num_list){
            answer += num;
        }
        return answer;
    } else {
        int answer = 1;
        for (auto num: num_list){
            answer *= num;
        }
        return answer;
    }
}

int main(){
    std::vector<int> num_list = {
        2, 3, 4, 5
    };
    std::cout << solution(num_list) << std::endl;
}