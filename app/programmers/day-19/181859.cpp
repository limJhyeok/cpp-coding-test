// 배열 만들기 6
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> arr){
    int i = 0;
    std::vector<int> stk;
    while (size(arr) > i){
        if (size(stk) == 0 || stk.back() != arr[i]){
            stk.push_back(arr[i]);
            i++;
        } else if(stk.back() == arr[i]){
            stk.pop_back();
            i++;
        }
    }
    if (size(stk) == 0){
        return {-1};
    }
    return stk;
}

int main(){
    std::vector<int> arr = {0, 1, 1, 0};
    std::vector<int> stk = solution(arr);
    for (int num: stk){
        std::cout << num << " ";
    }
    std::cout<<std::endl;
}