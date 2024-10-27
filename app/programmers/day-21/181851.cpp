// 전국 대회 선발 고사
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int solution(std::vector<int> rank, std::vector<bool> attendance){
    std::map<int, int> m;
    std::vector<int> filtered;
    for (int i = 0; i < size(rank); i++){
        m[rank[i]] = i;
        if (attendance[i]){
            filtered.push_back(rank[i]);
        }
    }
    sort(filtered.begin(), filtered.end());
    int a = m[filtered[0]];
    int b = m[filtered[1]];
    int c = m[filtered[2]];
    return 10000*a + 100*b + c;
}

int main(){
    std::vector<int> rank = {1, 2, 3};
    std::vector<bool> attendance = {true, true, true};

    std::cout << solution(rank, attendance) << std::endl;
}