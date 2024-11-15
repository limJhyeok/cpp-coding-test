// 원소들의 곱과 합
#include <math.h>

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
  int products = 1;
  int sumOfSquare = 0;
  for (auto num : num_list) {
    products *= num;
    sumOfSquare += num;
  }
  sumOfSquare = pow(sumOfSquare, 2);
  return products < sumOfSquare;
}

int main() {
  vector<int> num_list = {5, 7, 8, 3};
  cout << solution(num_list) << endl;
  return 0;
}