// n보다 커질 때까지 더하기
#include <iostream>
#include <vector>

int solution(std::vector<int> numbers, int n){
    int answer = 0;
    for (int i = 0; i < size(numbers); i++){
        if (answer > n){
            break;
        }
        answer += numbers[i];
    }
    return answer;
}

int main(){
    std::vector<int> numbers = {
        58, 44, 27, 10, 100 
    };
    int n = 139;
    std::cout << solution(numbers, n) << std::endl;
}