// 글자 지우기
#include <iostream>
#include <vector>

std::string solution(std::string my_string, std::vector<int> indicies){
    std::string answer;
    for (int i = 0; i < size(my_string); i++){
        bool isSkip = false;
        for (int j = 0; j < size(indicies); j++){
            if (i == indicies[j]){
                isSkip = true;
                indicies.erase(indicies.begin() + j);
                break;
            }
        }
        if (!isSkip){
            answer += my_string[i];
        }
    }
    return answer;    
}

int main(){
    std::string my_string = "apporoograpemmemprs";
    std::vector<int> indicies = {1, 16, 6, 15, 0, 10, 11, 3};
    std::string answer = solution(my_string, indicies);
    std::cout << answer << std::endl;
}