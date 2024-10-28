#include <iostream>
#include <vector>

int charToInt(char c){
    return (static_cast<int>(c) - static_cast<int>('0'));
}

std::string padLeftZero(std::string a, std::string strToPad){
    size_t sizeDiff = a.size() > strToPad.size() ? a.size() - strToPad.size() : 0;
    std::string temp;
    for (int i = 0; i < sizeDiff; i++){
        temp += "0";
    }
    return temp + strToPad;
}

std::string solution(std::string a, std::string b){
    int buffer = 0;
    std::vector<int> stk;
    a = padLeftZero(b, a);
    b = padLeftZero(a, b);
    for (int i = size(a) - 1; 0 <= i; i--){
        int addResult = (buffer + charToInt(a[i]) + charToInt(b[i]));
        int remainder = addResult % 10;
        buffer = addResult / 10;
        stk.push_back(remainder);
    }
    if (buffer != 0){
        stk.push_back(buffer);
    }
    std::string answer;

    while (!stk.empty()){
        answer += std::to_string(stk.back());
        stk.pop_back();
    }
    return answer;
}



int main(){
    std::string a = "0";
    std::string b = "20";
    std::cout << solution(a, b) << std::endl;
}