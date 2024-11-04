// 정수를 나선형으로 배치하기
#include <iostream>
#include <vector>
#include <map>
#include <math.h>

std::vector<std::vector<int>> fillRightArrow(std::vector<std::vector<int>> matrix, int row, int start_col, int last_col, int current_value){
    for (int j = start_col; j <= last_col; j++){
        matrix[row][j] = current_value;
        current_value++;
    }
    return matrix;
}

std::vector<std::vector<int>> fillDownArrow(std::vector<std::vector<int>> matrix, int col, int start_row, int last_row, int current_value){
    for (int i = start_row; i <= last_row; i++){
        matrix[i][col] = current_value;
        current_value++;
    }
    return matrix;
}

std::vector<std::vector<int>> fillLeftArrow(std::vector<std::vector<int>> matrix, int row, int start_col, int last_col, int current_value){
    for (int j = start_col; j >= last_col; j--){
        matrix[row][j] = current_value;
        current_value++;
    }
    return matrix;
}

std::vector<std::vector<int>> fillUptArrow(std::vector<std::vector<int>> matrix, int col, int start_row, int last_row, int current_value){
    for (int i = start_row; i >= last_row; i--){
        matrix[i][col] = current_value;
        current_value++;
    }
    return matrix;
}

std::vector<std::vector<int>> solution(int n){
    int n_row = n;
    int n_col = n;
    int default_value = 0;
    std::vector<std::vector<int>> answer = std::vector<std::vector<int>>(n, std::vector<int>(n_col, default_value));
    int current_value = 1;
    std::map<std::string, int> right_arrow_args;
    right_arrow_args["row"] = 0;
    right_arrow_args["start_col"] = 0;
    right_arrow_args["last_col"] = n - 1;
    
    std::map<std::string, int> down_arrow_args;
    down_arrow_args["col"] = n-1;
    down_arrow_args["start_row"] = 1;
    down_arrow_args["last_row"] = n - 1;

    std::map<std::string, int> left_arrow_args;
    left_arrow_args["row"] = n-1;
    left_arrow_args["start_col"] = n - 2;
    left_arrow_args["last_col"] = 0;

    std::map<std::string, int> up_arrow_args;
    up_arrow_args["col"] = 0;
    up_arrow_args["start_row"] = n - 2;
    up_arrow_args["last_row"] = 1;
    

    while (true) {
        answer = fillRightArrow(answer, right_arrow_args["row"], right_arrow_args["start_col"], right_arrow_args["last_col"], current_value);
        current_value = answer[right_arrow_args["row"]][right_arrow_args["last_col"]];
        right_arrow_args["row"]++;
        right_arrow_args["start_col"]++;
        right_arrow_args["last_col"]--;
        if (current_value >= pow(n,2)){
            break;
        }
        current_value++;
    
        answer = fillDownArrow(answer, down_arrow_args["col"], down_arrow_args["start_row"], down_arrow_args["last_row"], current_value);
        current_value = answer[down_arrow_args["last_row"]][down_arrow_args["col"]];
        down_arrow_args["col"]--; 
        down_arrow_args["start_row"]++;
        down_arrow_args["last_row"]--;
        if (current_value >= pow(n,2)){
            break;
        }
        current_value++;
    
        answer = fillLeftArrow(answer, left_arrow_args["row"], left_arrow_args["start_col"], left_arrow_args["last_col"], current_value);
        current_value = answer[left_arrow_args["row"]][left_arrow_args["last_col"]];
        left_arrow_args["row"]--;
        left_arrow_args["start_col"]--;
        left_arrow_args["last_col"]++;
        if (current_value >= pow(n,2)){
            break;
        }
        current_value++;
    
        answer = fillUptArrow(answer, up_arrow_args["col"], up_arrow_args["start_row"], up_arrow_args["last_row"], current_value);
        current_value = answer[up_arrow_args["last_row"]][up_arrow_args["col"]];
        up_arrow_args["col"]++;
        up_arrow_args["start_row"]--;
        up_arrow_args["last_row"]++;
        if (current_value >= pow(n,2)){
            break;
        }
        current_value++;
    }

    return answer;
}

int main(){
    int n = 10;
    std::vector<std::vector<int>> answer = solution(n);

    for (std::vector<int> row: answer) {
        for (int num: row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}