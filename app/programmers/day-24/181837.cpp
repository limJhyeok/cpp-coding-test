// 커피 심부름
#include <iostream>
#include <vector>
#include <map>

int solution(std::vector<std::string> order){
    std::map<std::string, int> price;
    price["iceamericano"] = 4500;
    price["americanoice"] = 4500;
    price["hotamericano"] = 4500;
    price["americanohot"] = 4500;

    price["icecafelatte"] = 5000;
    price["cafelatteice"] = 5000;
    price["hotcafelatte"] = 5000;
    price["cafelattehot"] = 5000;

    price["americano"] = 4500;

    price["cafelatte"] = 5000;

    price["anything"] = 4500;

    int answer = 0;
    for (std::string menu: order){
        answer += price[menu];
    }
    return answer;
    
}

int main(){
    std::vector<std::string> order = {
        "cafelatte", "americanoice", "hotcafelatte", "anything"
    };
    std::cout << solution(order) << std::endl;
}