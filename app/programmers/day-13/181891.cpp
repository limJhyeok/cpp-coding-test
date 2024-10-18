#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> answer, int n){
    std::vector<int> left = std::vector<int>(answer.begin(), answer.begin() + n);
    std::vector<int> right = std::vector<int>(answer.begin() + n, answer.end());
    for (auto num: left){
        right.push_back(num);
    }
    return right;
}

int main(){
    std::vector<int> num_list = {5, 2, 1, 7, 5};
    int n = 3;
    std::vector<int> answer = solution(num_list, n);
    for (auto num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}