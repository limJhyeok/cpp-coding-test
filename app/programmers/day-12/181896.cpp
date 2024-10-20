// 첫 번째로 나오는 음수
#include <iostream>
#include <vector>

int solution(std::vector<int> num_list){
    for (int i = 0; i < size(num_list); i++){
        if (num_list[i] < 0){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<int> num_list = {
        13, 22, 53, 24, 15, 6
    };
    std::cout << solution(num_list) << std::endl;
}