// 특별한 이차원 배열 1
#include <iostream>
#include <vector>

std::vector<std::vector<int>> solution(int n){
    int rows = n;
    int cols = n;
    int default_value = 0;
    std::vector<std::vector<int>> answer = std::vector<std::vector<int>>(
        rows, 
        (std::vector<int>(cols, default_value))
        );

    for (int i = 0; i < n; i++){
        answer[i][i] = 1;
    }

    return answer;
}

int main(){
    int n = 5;
    std::vector<std::vector<int>> answer = solution(n);
    
    for (std::vector<int> row: answer) {
        for (int num: row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

}