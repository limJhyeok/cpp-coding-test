// n번째 원소까지
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> num_list, int n){
    return std::vector<int>(num_list.begin(), num_list.begin() + n);
}

int main(){
    std::vector<int> num_list = {5, 2, 1, 7, 5};
    int n = 3;
    std::vector<int> answer = solution(num_list, n);

    for(auto num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}