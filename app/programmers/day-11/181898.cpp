// 가까운 1 찾기
#include <iostream>
#include <vector>

int solution(std::vector<int> arr, int idx){
    int answer = -1;
    for (int i = idx; i < size(arr); i++){
        if (arr[i] == 1){
            answer = i;
            break;
        }
    }
    return answer;
}

int main(){
    std::vector<int> arr = {1, 1, 1, 1, 0};
    int idx = 3;
    std::cout << solution(arr, idx) << std::endl;
}