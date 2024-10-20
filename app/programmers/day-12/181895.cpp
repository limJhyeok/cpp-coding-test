// 배열 만들기 3
#include <iostream>
#include <vector>

// std::vector<int> solution(std::vector<int> arr, std::vector<std::vector<int>> intervals){
//     std::vector<int> answer;
//     for (std::vector<int> interval: intervals){
//         int a = interval[0];
//         int b = interval[1];
//         for (int i = a; i <= b; i++){
//             answer.push_back(arr[i]);
//         }
//     }
//     return answer;
// }
std::vector<int> solution(std::vector<int> arr, std::vector<std::vector<int>> intervals) {
    // intervals의 모든 범위를 계산해 answer에 필요한 용량을 미리 예약
    int total_size = 0;
    for (const auto& interval : intervals) {
        total_size += (interval[1] - interval[0] + 1);
    }

    std::vector<int> answer;
    answer.reserve(total_size);  // 필요한 메모리 공간을 미리 할당

    // 구조 분해 할당 대신, 각각의 interval에서 a와 b를 명시적으로 추출
    for (const auto& interval : intervals) {
        int a = interval[0];
        int b = interval[1];
        answer.insert(answer.end(), arr.begin() + a, arr.begin() + b + 1);
    }

    return answer;
}


int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<std::vector<int>> intervals = {
        {1, 3},
        {0, 4}
    };
    std::vector<int> answer = solution(arr, intervals);
    for (auto num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}