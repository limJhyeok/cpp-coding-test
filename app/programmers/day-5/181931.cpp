// 등차수열의 특정한 항만 더하기
#include <iostream>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
  int answer = 0;
  for (int i = 0; i < size(included); i++) {
    if (included[i]) {
      answer += (a + i * d);
    }
  }
  return answer;
}

int main() {
  int a = 3;
  int d = 4;
  vector<bool> included = {true, false, false, true, true};

  cout << solution(a, d, included);
  return 0;
}