// 정사각형으로 만들기
#include <iostream>
#include <vector>

std::vector<std::vector<int>> solution(std::vector<std::vector<int>> arr){
    size_t rowSize = size(arr);
    size_t colSize = size(arr[0]);
    int diffRowCol= rowSize - colSize;
    if (diffRowCol > 0){
        for (int i = 0; i < size(arr); i++){
            std::vector<int> surplus = std::vector<int>(diffRowCol, 0);
            arr[i].insert(arr[i].end(), surplus.begin(), surplus.end());
        }
        return arr;
    } else if(diffRowCol < 0){
        for (int i = 0; i < -diffRowCol; i++){
            std::vector<int> surplus = std::vector<int>(colSize, 0);
            arr.push_back(surplus);
        }
    }
    return arr;
}

int main(){
    std::vector<std::vector<int>> arr = {
        {57, 192, 534, 2}, {9, 345, 192, 999}
    };
    std::vector<std::vector<int>> answer = solution(arr);

    for (auto row: answer) {
        for (int num: row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
}
