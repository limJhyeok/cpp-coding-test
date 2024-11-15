// 이어 붙인 수
#include <iostream>
#include <vector>
using namespace std;

bool isOdd(int number) {
  if (number % 2 == 0) {
    return false;
  }
  return true;
}

int solution(vector<int> num_list) {
  string concatOdds = "";
  string concatEvens = "";
  for (auto num : num_list) {
    if (isOdd(num)) {
      concatOdds += to_string(num);
    } else {
      concatEvens += to_string(num);
    }
  }
  return stoi(concatOdds) + stoi(concatEvens);
}

int main() {
  vector<int> num_list = {5, 7, 8, 3};
  cout << solution(num_list);
  return 0;
}