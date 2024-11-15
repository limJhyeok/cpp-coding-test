// 조건 문자열
#include <iostream>
using namespace std;

int solution(string ineq, string eq, int n, int m) {
  if ((ineq == "<") && (eq == "=")) {
    return n <= m;
  }
  if ((ineq == "<") && (eq == "!")) {
    return n < m;
  }
  if ((ineq == ">") && (eq == "=")) {
    return n >= m;
  }
  if ((ineq == ">") && (eq == "!")) {
    return n > m;
  }
  return -1;
}

int main() {
  string ineq = ">";
  string eq = "!";
  int n = 41;
  int m = 78;

  cout << solution(ineq, eq, n, m);
}