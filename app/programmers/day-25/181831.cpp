// 특별한 이차원 배열 2
#include <iostream>
#include <vector>

int solution(std::vector<std::vector<int>> arr){
    int n = size(arr);

    for (int i = 0; i < n/2 + 1; i++){
        for (int j = 0; j < n/2 + 1; j++){
            if (arr[i][j] != arr[j][i]) return 0;
        }
    }
    return 1;
}

int main(){
    std::vector<std::vector<int>> arr = {
        {19, 498, 258, 587}, {63, 93, 7, 754}, {258, 7, 1000, 723}, {587, 754, 723, 81}
    };
    std::cout << solution(arr) << std::endl;
}