// 2의 영역
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr){
    int left = -1;
    int right = -1;
    for (int i = 0; i < size(arr); i++){
        if (arr[i] == 2){
            if (left == -1){
                left = i;
            } else {
                right = i;
            }
        }
    }
    if (left == -1){
        return {-1};
    }
    if (right == -1){
        return {2};
    }
    return std::vector<int>(arr.begin()+left, arr.begin() + right + 1);
}

int main(){
    std::vector<int> arr = {1, 2, 1, 2, 1, 10, 2, 1};
    std::vector<int> answer = solution(arr);
    for (auto num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;

}