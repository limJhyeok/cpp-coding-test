// 배열의 원소 삭제하기
#include <iostream>
#include <vector>
#include <map>

// TODO: std::map::find 정리
// TODO: erase 함수와 시간 비교(프로파일링)

std::vector<int> solution(std::vector<int> arr, std::vector<int> delete_list){
    size_t arrSize = size(arr);
    std::vector<bool> isDeletedIds = std::vector<bool>(arrSize, false);
    std::map<int, int> elemToId;
    // mapping(elem to id)
    for (int i = 0; i < arrSize; i++){
        elemToId[arr[i]] = i;
    }
    // remove id to delete using map(elem to id)
    for (int i = 0; i < size(delete_list); i++){
        int deleteElem = delete_list[i];
        if (elemToId.find(deleteElem) != elemToId.end()){
            int id = elemToId[deleteElem];
            isDeletedIds[id] = true;
        }
    }
    // make the answer whether id should not be deleted or not
    std::vector<int> answer;
    for (int i = 0; i < arrSize; i++){
        if (isDeletedIds[i] == false){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}

int main(){
    std::vector<int> arr = {
        110, 66, 439, 785, 1
    };
    std::vector<int> delete_list = {
        377, 823, 119, 43
    };
    std::vector<int> answer = solution(arr, delete_list);
    for (int num: answer){
        std::cout << num << std::endl;
    }
}