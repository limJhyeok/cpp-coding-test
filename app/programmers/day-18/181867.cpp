// x 사이의 개수
#include <iostream>
#include <vector>

std::vector<int> solution(std::string myString){
    int counter = 0;
    std::vector<int> answer;
    for (int i = 0; i < size(myString); i++){
        if(myString[i] == 'x'){
            answer.push_back(counter);
            counter = 0;
        } else {
            counter++;
        }
    }
    answer.push_back(counter);
    return answer;
}

int main(){
    std::string myString = "xabcxdefxghi";
    std::vector<int> answer = solution(myString);
    for (int num: answer){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}