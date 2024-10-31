// 특별한 이차원 배열 2
#include <iostream>
#include <vector>

int solution(std::vector<std::vector<int>> arr){
    for (int i = 0; i < size(arr); i++){
        for (int j = 0; j< size(arr[i]); j++){
            if (arr[i][j] != arr[j][i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    std::vector<std::vector<int>> arr = {
        {19, 498, 258, 587}, {63, 93, 7, 754}, {258, 7, 1000, 723}, {587, 754, 723, 81}
    };
    int answer = solution(arr);
    std::cout << answer << std::endl;

}