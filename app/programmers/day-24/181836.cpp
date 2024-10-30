// 그림 확대
#include <iostream>
#include <vector>

std::vector<std::string> solution(std::vector<std::string> picture, int k){
    std::vector<std::string> answer;
    for (std::string row: picture){
        std::string answerRow;
        for (char pixel: row){
            for (int i = 0; i < k; i++){
                answerRow += pixel;
            }
        }
        for (int i = 0; i < k; i ++){
            answer.push_back(answerRow);
        }
    }
    return answer;
}

int main(){
    std::vector<std::string> picture = {
        ".xx...xx.", "x..x.x..x", "x...x...x", ".x.....x.", "..x...x..", "...x.x...", "....x...."
    };

    int k = 10;
    std::vector<std::string> answer = solution(picture, k);
    for (std::string s: answer){
        std::cout << s << std::endl;
    }
    std::cout << std::endl;
}