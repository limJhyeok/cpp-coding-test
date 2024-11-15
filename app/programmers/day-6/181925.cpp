// 수 조작하기 2
#include <iostream>
#include <vector>
using namespace std;

char getControlLog(int diff) {
  if (diff == 1) {
    return 'w';
  }
  if (diff == -1) {
    return 's';
  }
  if (diff == 10) {
    return 'd';
  }
  if (diff = -10) {
    return 'a';
  }
  return 'e';
}

string solution(vector<int> numLog) {
  string answer;
  for (int i = 0; i < size(numLog) - 1; i++) {
    int diff = numLog[i + 1] - numLog[i];
    char controlLog = getControlLog(diff);
    answer += controlLog;
  }
  return answer;
}

int main() {
  vector<int> numLog = {0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1};
  cout << solution(numLog) << endl;
}