// 빈 배열에 추가, 삭제하기
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr, std::vector<bool> flag){
    std::vector<int> answer;
    for (int i = 0; i < size(flag); i++) {
        if (flag[i]){
            std::vector<int> pushed = std::vector<int>(arr[i]*2, arr[i]);
            answer.insert(answer.end(), pushed.begin(), pushed.end());
        } else {
            for (int j = 0; j < arr[i]; j++) {
                answer.pop_back();
            }
        }
    }
    return answer;
}

int main(){
    std::vector<int> arr = {3, 2, 4, 1, 3};
    std::vector<bool> flag = {true, false, true, false, false};
    std::vector<int> answer = solution(arr, flag);
    for (int num: answer) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}