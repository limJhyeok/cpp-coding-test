// 그림 확대
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> picture, int k) {
  std::vector<std::string> answer;
  std::string answer_row;

  for (std::string row : picture) {
    for (char pixel : row) {
      for (int i = 0; i < k; i++) {
        answer_row += pixel;
      }
    }
    for (int i = 0; i < k; i++) {
      answer.push_back(answer_row);
    }
    answer_row = "";
  }
  return answer;
}

int main() {
  std::vector<std::string> picture = {"x.x", ".x.", "x.x"};
  int k = 3;

  std::vector<std::string> answer = solution(picture, k);
  for (std::string row : answer) {
    for (char pixel : row) {
      std::cout << pixel;
    }
    std::cout << std::endl;
  }
}