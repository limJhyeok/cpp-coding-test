// 카운트 다운
#include <iostream>
#include <vector>

std::vector<int> solution(int start_num, int end_num){
    std::vector<int> answer;
    for (int i = start_num; i >= end_num; i--){
        answer.push_back(i);
    }
    return answer;
}


int main(){
    int start_num = 10;
    int end_num = 3;
    std::vector<int> answer = solution(start_num, end_num);
    for (auto num: answer){
        std::cout << num << " ";
    }
    std::cout<<std::endl;
}