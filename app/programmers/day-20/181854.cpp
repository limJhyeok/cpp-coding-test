// 배열의 길이에 따라 다른 연산하기
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr, int n){
    if (size(arr) % 2 == 1){
        for(int i = 0; i < size(arr); i += 2){
            arr[i] += n;
        }
        return arr;
    }

    for (int i = 1; i < size(arr); i += 2){
        arr[i] += n;
    }
    return arr;
}

int main(){
    std::vector<int> arr = {
        49, 12, 100, 276, 33
    };
    int n = 27;

    std::vector<int> answer = solution(arr, n);

    for (int num: answer) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}