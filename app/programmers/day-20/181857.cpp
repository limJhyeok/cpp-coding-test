// 배열의 길이를 2의 거듭제곱으로 만들기
#include <iostream>
#include <vector>
#include <math.h>

std::vector<int> solution(std::vector<int> arr){
    double powerOfTwo = std::log(size(arr)) / std::log(2);
    int floor = std::floor(powerOfTwo);
    if (powerOfTwo == floor){
        return arr;
    }
    size_t arrSize = size(arr);
    for (int i = 0; i < pow(2, floor + 1) - arrSize; i++){
        arr.push_back(0);
    }
    return arr;
}

int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    
    std::vector<int> answer = solution(arr);
    for (int num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}