// 2의 영역
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr){
    int first = -1;
    int last = -1;
    for (int i = 0; i < size(arr); i++){
        if (arr[i] == 2){
            if (first == -1){
                first = i;
            } else {
                last = i;
            }
        }
    }
    if (first == -1){
        return {-1};
    }
    if (last == -1){
        return {2};
    }
    return std::vector<int>(arr.begin() + first, arr.begin() + last + 1);
}

int main(){
    std::vector<int> arr = {1, 2, 1, 2, 1, 10, 2, 1};
    std::vector<int> answer = solution(arr);
    for (auto num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}