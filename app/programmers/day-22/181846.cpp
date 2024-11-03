// 두 수의 합
#include <iostream>
#include <algorithm>

char charToInt(char c){
    return c - '0';
}

bool isLongerString(std::string a, std::string b){
    return size(a) > size(b);
}

std::string leftZeroPad(std::string a, int numberOfZeroPad){
    std::string padded;
    padded.reserve(size(a) + numberOfZeroPad);
    for (int i = 0; i < numberOfZeroPad; i++){
        padded += '0';
    }
    padded.append(a);
    return padded;
}

std::string solution(std::string a, std::string b){
    std::string temp = "0";
    std::string answer;
    int addResult = 0;
    int base = 2;
    if(isLongerString(a, b)){
        b = leftZeroPad(b, size(a) - size(b));
    } else{
        a = leftZeroPad(a, size(b) - size(a));
    }
    for (int i = size(a) - 1; i >= 0; i--){
        addResult = std::stoi(temp) + charToInt(a[i]) + charToInt(b[i]);
        temp = std::to_string(addResult / base);
        answer += std::to_string(addResult % base);
    }
    if (temp != "0"){
        answer += temp;
    }
    std::reverse(answer.begin(), answer.end());
    return answer;
}

int main(){
    std::string a = "101";
    std::string b = "011";
    std::cout << solution(a, b) << std::endl;
}