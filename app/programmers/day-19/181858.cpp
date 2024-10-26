// 무작위로 k개의 수 뽑기
#include <iostream>
#include <vector>

bool isDuplicateInVector(std::vector<int> arr, int x){
    for (int num: arr){
        if (num == x){
            return true;
        }
    }
    return false;
}


std::vector<int> solution(std::vector<int> arr, int k){
    std::vector<int> answer;
    for (int num: arr){
        bool isDuplicate = isDuplicateInVector(answer, num);
        if (!isDuplicate){
            answer.push_back(num);
        }
        if (size(answer) >= k){
            return answer;
        }
    }
    while (size(answer) < k){
        answer.push_back(-1);
    }
    return answer;
}

int main(){
    std::vector<int> arr = {0, 1, 1, 1, 1};
    int k = 4;
    std::vector<int> answer = solution(arr, k);
    for (int num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}