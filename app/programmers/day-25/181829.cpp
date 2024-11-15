// 이차원 배열 대각선 순회하기
#include <iostream>
#include <vector>

int solution(std::vector<std::vector<int>> board, int k) {
  int n_rows = size(board);
  int n_cols = size(board[0]);
  int answer = 0;
  for (int i = 0; i < n_rows; i++) {
    for (int j = 0; j < n_cols; j++) {
      if (i + j <= k) {
        answer += board[i][j];
      }
    }
  }
  return answer;
}

int main() {
  std::vector<std::vector<int>> board = {
      {0, 1, 2}, {1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
  int k = 2;
  std::cout << solution(board, k) << std::endl;
}