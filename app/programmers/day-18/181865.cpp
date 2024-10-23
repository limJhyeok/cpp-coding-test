// 간단한 식 계산하기
#include <iostream>
#include <vector>

std::vector<std::string> split(std::string str){
    std::vector<std::string> splitResult;
    std::string temp;
    for (int i = 0; i < size(str); i++){
        if (str[i] == ' '){
            splitResult.push_back(temp);
            temp = "";
        } else{
            temp += str[i];
        }
    }
    splitResult.push_back(temp);
    return splitResult;
}


int solution(std::string binomial){
    std::vector<std::string> splitResult = split(binomial);
    int a = stoi(splitResult[0]);
    int b = stoi(splitResult[2]);

    std::string op = splitResult[1];
    if (op == "+"){
        return a + b;
    }
    if (op == "-"){
        return a - b;
    }
    if (op == "*"){
        return a * b;
    }
    return -1;
}

int main(){
    std::string binomial = "40000 * 40000";
    std::cout << solution(binomial) << std::endl;
}