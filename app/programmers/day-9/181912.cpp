// 배열 만들기 5
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<std::string> intStrs, int k, int s, int l){
    std::vector<int> answer;
    for (auto intStr: intStrs){
        int slice = stoi(intStr.substr(s, l));
        if (slice > k){
            answer.push_back(slice);
        }
    }
    return answer;
}

int main(){
    std::vector<std::string> intStrs = {
        "0123456789",
        "9876543210",
        "9999999999999"
    };
    int k = 50000;
    int s = 5;
    int l = 5;
    std::vector<int> answer = solution(intStrs, k, s, l);
    for (auto num: answer){
        std::cout << num << std::endl;
    }
}