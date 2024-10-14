// 주사위 게임 3
#include <iostream>
#include <vector>
#include <map>
#include <limits>
#include <math.h>

int getMinimum(int a, int b, int c, int d){
    int minimum = std::numeric_limits<int>::max();
    int arr[] = {a, b, c, d};
    for (auto num: arr){
        if (minimum > num){
            minimum = num;
        }
    }
    return minimum;
}

int solution(int a, int b, int c, int d){
    std::map<int, int> numOfDuplicates;
    int arr[] = {a, b, c, d};
    for (auto num: arr){
        numOfDuplicates[num] += 1;
    }

    std::vector<int> duplicates;
    std::vector<int> notDuplicates;
    for (auto pair: numOfDuplicates){
        if (pair.second > 1){
            duplicates.push_back(pair.first);
            continue;
        }
        notDuplicates.push_back(pair.first);
    }

    if (size(numOfDuplicates) == 1){
        return 1111*a;
    }
    if (size(numOfDuplicates) == 2){
        if (size(duplicates) == 2){
            int p = duplicates[0];
            int q = duplicates[1];
            return (p + q) * abs(p - q);
        }
        int p = duplicates[0];
        int q = notDuplicates[0];
        return pow((10*p + q), 2);
    }
    if (size(numOfDuplicates) == 3){
        int q = notDuplicates[0];
        int r = notDuplicates[1];
        return q*r;
    }
    if (size(numOfDuplicates) == 4){
        return getMinimum(a, b, c, d);
    }
    return 0;
}

int main(){
    int a = 6;
    int b = 4;
    int c = 2;
    int d = 5;
    std::cout << solution(a, b, c, d) << std::endl;
}