// 특별한 이차원 배열 1
#include <iostream>
#include <vector>

std::vector<std::vector<int>> solution(int n){
    std::vector<std::vector<int>> answer;
    for (int i = 0; i < n; i++){
        std::vector<int> row = std::vector<int>(n, 0);
        row[i] = 1;
        answer.push_back(row);
    }

    return answer;
}

int main(){
    int n = 1;
    std::vector<std::vector<int>> answer = solution(n);
    for (auto row: answer){
        for (int num: row){
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}