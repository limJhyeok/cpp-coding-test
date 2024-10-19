// 홀수 vs 짝수
#include <iostream>
#include <vector>

int solution(std::vector<int> num_list){
    int SumOfOddElemes = 0;
    int SumOfEvenElemes = 0;

    for (int i = 0; i < size(num_list); i += 2){
        SumOfOddElemes += num_list[i];
    }
    for (int i = 1; i < size(num_list); i += 2){
        SumOfEvenElemes += num_list[i];
    }
    return std::max(SumOfOddElemes, SumOfEvenElemes);
}

int main(){
    std::vector<int> num_list = {-1, 2, 5, 6, 3};
    std::cout << solution(num_list) << std::endl;
}