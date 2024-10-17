// 배열 만들기 3
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr, std::vector<std::vector<int>> intervals){
    int a1 =intervals[0][0];
    int b1 =intervals[0][1];
    int a2 =intervals[1][0];
    int b2 =intervals[1][1];
    std::vector<int> left = std::vector<int>(arr.begin()+a1, arr.begin()+b1+1);
    std::vector<int> right = std::vector<int>(arr.begin()+a2, arr.begin()+b2+1);
    for (auto num: right){
        left.push_back(num);
    }
    return left;
}

int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<std::vector<int>> intervals = {
        {1, 3},
        {0, 4}
    };

    std::vector<int> answer = solution(arr, intervals);
    for (auto num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}