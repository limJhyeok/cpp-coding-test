// 조건에 맞게 수열 변환하기 2
#include <iostream>
#include <vector>

std::vector<int> transformArr(std::vector<int> arr){
    for (int i = 0; i < size(arr); i++){
        if (arr[i] >=50 && arr[i] % 2 == 0){
            arr[i] /= 2;
            continue;
        }
        if (arr[i] < 50 && arr[i] % 2 == 1){
            arr[i] = 2*arr[i] + 1;
            continue;
        }
    }
    return arr;
}

int solution(std::vector<int> arr){
    int x = 0;
    std::vector<int> prev;
    while (arr != prev){
        prev = arr;
        arr = transformArr(arr);
        x++;
    }
    return x - 1;
}

int main(){
    std::vector<int> arr = {
        1, 2, 3, 100, 99, 98
    };
    std::cout << solution(arr) << std::endl;

}