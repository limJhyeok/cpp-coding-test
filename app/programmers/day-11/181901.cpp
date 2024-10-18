// 배열 만들기 1
#include <iostream>
#include <vector>

std::vector<int> solution(int n, int k){
    std::vector<int> answer;
    for (int i = k; i <= n; i += k){
        answer.push_back(i);
    }
    return answer;
}

int main(){
    int n = 15;
    int k = 5;
    std::vector<int> answer = solution(n, k);
    for (auto num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}