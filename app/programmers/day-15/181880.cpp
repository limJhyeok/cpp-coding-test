// 1로 만들기
#include <iostream>
#include <vector>

int makeOne(int num){
    int count = 0;
    while (num != 1){
        if (num % 2 == 0){
            num /= 2;
        }else {
            num = (num -1) / 2;
        }
        count++;
    }
    return count;
}

int solution(std::vector<int> num_list){
    int answer = 0;
    for (auto num: num_list){
        answer += makeOne(num);
    }
    return answer;
}

int main(){
    std::vector<int> num_list = {
        12, 4, 15, 1, 14
    };
    std::cout << solution(num_list) << std::endl;
}