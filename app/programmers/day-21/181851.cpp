// 전국 대회 선발 고사
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
int solution(std::vector<int> rank, std::vector<bool> attendance){
    std::map<int, int> rank2index;
    for (int i = 0; i < size(rank); i++){
        rank2index[rank[i]] = i;
    }
    int index = -1;
    std::vector<int> candidate;
    for (int _rank = 1; _rank <= size(rank); _rank++){
        if (size(candidate) >= 3){
            break;
        }
        index = rank2index[_rank];

        if (attendance[index]){
            candidate.push_back(index);
        }
    }
    return 10000 * candidate[0] + 100 * candidate[1] + candidate[2];
}

int main(){
    std::vector<int> rank = {
        3, 7, 2, 5, 4, 6, 1
    };
    std::vector<bool> attendance = {
        false, true, true, true, true, false, false
    };
    std::cout << solution(rank, attendance) << std::endl;
    
}