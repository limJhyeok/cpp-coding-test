// 배열 비교하기
#include <iostream>
#include <vector>

int elemSum(std::vector<int> arr){
    int sum = 0;
    for (int i = 0; i < size(arr); i++){
        sum += arr[i];
    }
    return sum;
}

int solution(std::vector<int> arr1, std::vector<int> arr2){
    if (size(arr1) != size(arr2)){
        return (size(arr1) > size(arr2)) ? 1 : -1;
    }
    int sumOfArr1 = elemSum(arr1);
    int sumOfArr2 = elemSum(arr2);
    if (sumOfArr1 != sumOfArr2){
        return (sumOfArr1 > sumOfArr2) ? 1 : -1;
    }
    return 0;
}

int main(){
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {3, 3, 3, 3, 3};
    std::cout << solution(arr1, arr2) << std::endl;
}