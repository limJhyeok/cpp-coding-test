// 빈 배열에 추가, 삭제하기
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr, std::vector<bool> flag){
    std::vector<int> answer;
    for (int i = 0; i < size(flag); i++){
        int num = arr[i];
        if (flag[i] == true){
            for (int j = 0; j < 2*num; j++){
                answer.push_back(num);
            }
        } else{
            for (int j = 0; j < num; j++){
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
    for (int num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}