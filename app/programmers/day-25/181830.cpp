// 정사각형으로 만들기
#include <iostream>
#include <vector>

#include "../../utils/timer_utils.h"

std::vector<std::vector<int>> insertSolution(
    std::vector<std::vector<int>> arr) {
  int n_rows = size(arr);
  int n_cols = size(arr[0]);
  int row_minus_col = (n_rows - n_cols);
  if (row_minus_col == 0) return arr;

  int default_value = 0;
  if (row_minus_col < 0) {
    std::vector<int> additional_rows = std::vector<int>(n_cols, default_value);
    for (int i = 0; i < -row_minus_col; i++) {
      arr.insert(arr.end(), additional_rows);
    }
    return arr;
  }
  if (row_minus_col > 0) {
    std::vector<int> additionalCols =
        std::vector<int>(row_minus_col, default_value);

    for (int i = 0; i < n_rows; i++) {
      arr[i].insert(arr[i].end(), additionalCols.begin(), additionalCols.end());
    }
    return arr;
  }
  return {};
}

std::vector<std::vector<int>> solution(std::vector<std::vector<int>> arr) {
  int n_rows = size(arr);
  int n_cols = size(arr[0]);
  int row_minus_col = (n_rows - n_cols);
  if (row_minus_col == 0) return arr;

  int default_value = 0;
  if (row_minus_col < 0) {
    std::vector<int> additional_rows = std::vector<int>(n_cols, default_value);
    for (int i = 0; i < -row_minus_col; i++) {
      arr.push_back(additional_rows);
    }
    return arr;
  }
  if (row_minus_col > 0) {
    for (int i = 0; i < n_rows; i++) {
      for (int j = 0; j < row_minus_col; j++) {
        arr[i].push_back(default_value);
      }
    }
    return arr;
  }
  return {};
}

int main() {
  std::vector<std::vector<int>> arr = {{57, 192, 534, 2}, {9, 345, 192, 999}};
  std::vector<std::vector<int>> answer = solution(arr);

  for (std::vector<int> row : answer) {
    for (int num : row) {
      std::cout << num << " ";
    }
    std::cout << std::endl;
  }

  int iterations = 100;
  compareFunctionSpeeds([&]() { solution(arr); },
                        [&]() { insertSolution(arr); }, iterations);

  // Average execution time of solution over 100 iterations: 8.7227e-07 seconds
  // Average execution time of insertSolution over 100 iterations: 1.20982e-06
  // seconds solution is 1.38698 times faster than insertSolution.

  // ref:
  // stackOverFlow(https://stackoverflow.com/questions/13324431/c-vectors-insert-push-back-difference)
  // insert might often be less efficient than push_back.
}