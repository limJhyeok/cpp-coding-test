// 조건에 맞게 수열 변환하기 1
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr){
    for (int i = 0; i < size(arr); i++){
        if (arr[i] >= 50 && arr[i] % 2 == 0){
            arr[i] /= 2;
            continue;
        }
        if (arr[i] < 50 && arr[i] % 2 == 1){
            arr[i] *= 2;
            continue;
        }
    }
    return arr;
}

int main(){
    std::vector<int> arr = {
        1, 2, 3, 100, 99, 98
    };
    std::vector<int> answer = solution(arr);
    for (auto num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}