// 길이에 따른 연산
#include <iostream>
#include <vector>

int sumOfElems(std::vector<int> num_list){
    int sum = 0;
        for (auto num: num_list){
            sum += num;
        }
    return sum;
}

int productOfElems(std::vector<int> num_list){
    int product = 1;
    for (auto num: num_list){
        product *= num;
    }
    return product;
}

int solution(std::vector<int> num_list){
    if (size(num_list) >= 11){
        return sumOfElems(num_list);
    }
    return productOfElems(num_list);
}

int main(){
    std::vector<int> num_list = {
        2, 3, 4, 5
    };
    std::cout << solution(num_list) << std::endl;
}