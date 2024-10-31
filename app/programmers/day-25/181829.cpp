// 이차원 배열 대각선 순회하기
#include <iostream>
#include <vector>

int solution(std::vector<std::vector<int>> board, int k){
    int rowSize = size(board);
    int columnSize = size(board[0]);
    int sum = 0;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < columnSize; j++) {
            if (i + j <= k){
                sum += board[i][j];
            }
        }
    }
    return sum;
}

int main(){
    std::vector<std::vector<int>> board = {
        {0, 1, 2},{1, 2, 3},{2, 3, 4},{3, 4, 5}
    };
    int k = 2;
    std::cout << solution(board, k) << std::endl;
}