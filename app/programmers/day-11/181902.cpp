// 문자 개수 세기
#include <iostream>

// 배열로 문제를 풀 경우

int* solution(std::string my_string){
    int* arr = new int[52];
    const int upperCaseSize = static_cast<int>('Z'-'A');
    for (char c: my_string){
        if (c >= 'A' && c <= 'Z'){
            arr[static_cast<int>(c - 'A')] += 1;
        }
        if (c >= 'a' && c <= 'z'){
            int idx = upperCaseSize + static_cast<int>(c - 'a') + 1;
            arr[idx] += 1;
        }
    }
    return arr;
}

int main(){
    std::string my_string = "Programmers";
    int* answer = solution(my_string);
    for (int i = 0; i < 52; i++){
        std::cout << answer[i] << " ";
    }
    std::cout << std::endl;
    delete[] answer;
}

// #include <vector>

// std::vector<int> solution(std::string my_string){
//     std::vector<int> answer(52, 0);
//     const int upperCaseSize = static_cast<int>('Z'-'A');
//     for (char c: my_string){
//         if (c >= 'A' && c <= 'Z'){
//             answer[static_cast<int>(c - 'A')] += 1;
//         }
//         if (c >= 'a' && c <= 'z'){
//             int idx = upperCaseSize + static_cast<int>(c - 'a') + 1;
//             answer[idx] += 1;
//         }
//     }
//     return answer;
// }

// int main(){
//     std::string my_string = "Programmers";
//     std::vector<int> answer = solution(my_string);
//     for (auto num: answer){
//         std::cout << num << " ";
//     }    
//     std::cout << std::endl;
//     std::cout << size(answer) << std::endl;
// }