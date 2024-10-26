// 배열의 원소만큼 추가하기
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr){
    std::vector<int> answer;
    for (int num: arr){
        for (int i = 0; i < num; i++){
            answer.push_back(num);
        }
    }
    return answer;
}

int main(){
    std::vector<int> arr = {1};
    std::vector<int> answer = solution(arr);
    for (int num: answer){
        std::cout << num << " ";
    }

    std::cout << std::endl;
}