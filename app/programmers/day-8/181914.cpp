// 9로 나눈 나머지
#include <iostream>

int solution(std::string number){
    int answer = 0;
    for (int i = 0; i < size(number); i++){
        answer += (static_cast<int>(number[i]) - static_cast<int>('0'));
    }
    return answer%9;
}

int main(){
    std::string number = "78720646226947352489";
    std::cout << solution(number) << std::endl;
}