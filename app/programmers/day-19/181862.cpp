// 세 개의 구분자
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::string myStr){
    std::vector<std::string> answer;
    std::string temp;
    for (char c: myStr){
        if (c == 'a' || c == 'b' || c == 'c'){
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
        temp = "";
    }
    if (size(answer) == 0){
        return {"EMPTY"};
    }
    return answer;
}

int main(){
    std::string myStr = "cabab";
    std::vector<std::string> answer = solution(myStr);
    for (std::string c: answer){
        std::cout << c << " "; 
    }
    std::cout << std::endl;
}