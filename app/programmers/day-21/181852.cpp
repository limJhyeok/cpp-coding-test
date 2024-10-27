// 뒤에서 5등 위로
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> answer){
    sort(answer.begin(), answer.end());
    return std::vector<int>(answer.begin()+5, answer.end());
}

int main(){
    std::vector<int> num_list = {
        12, 4, 15, 46, 38, 1, 14, 56, 32, 10
    };
    std::vector<int> answer = solution(num_list);
    for (int num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}