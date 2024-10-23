// 문자열 잘라서 정렬하기
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> solution(std::string myString){
    std::string temp;
    std::vector<std::string> answer;
    for (char c: myString){
        if (c == 'x'){
            if (temp != ""){
                answer.push_back(temp);
                temp = "";
            }
        } else {
            temp += c;
        }
    }
    if (temp != ""){
        answer.push_back(temp);
    }
    std::sort(answer.begin(), answer.end());
    return answer;
}

int main(){
    std::string myString = "dxccxbbbxaaaa";
    std::vector<std::string> answer = solution(myString);
    for (auto str: answer){
        std::cout << str << " ";
    }
    std::cout << std::endl;
}