// 문자열 묶기
#include <iostream>
#include <vector>
#include <map>

int solution(std::vector<std::string> strArr){
    std::map<int, int> m;
    for (std::string s: strArr){
        m[size(s)]++;
    }
    int maxCount = -1;
    for (auto pair: m){
        if(maxCount < pair.second){
            maxCount = pair.second;
        }
    }
    return maxCount;
}

int main(){
    std::vector<std::string> strArr = {
        "a","bc","d","efg","hi"
    };
    std::cout << solution(strArr) << std::endl;

}