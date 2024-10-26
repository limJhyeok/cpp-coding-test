// 뒤에서 5등까지
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> num_list){
    std::sort(num_list.begin(), num_list.end());
    return std::vector(num_list.begin(), num_list.begin()+5);
}

int main(){
    std::vector<int> num_list = {
        12, 4, 15, 46, 38, 1, 14
    };
    std::vector<int> answer = solution(num_list);
    for (int num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;

}