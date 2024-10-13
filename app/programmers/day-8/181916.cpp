// 주사위 게임 3
#include <iostream>
#include <map>
#include <limits>
#include <vector>
#include <math.h>
using namespace std;

int solution(int a, int b, int c, int d){
    map<int, int> checkDuplicate;
    int arr[] = {a, b, c, d};
    for (auto num: arr){
        checkDuplicate[num] += 1;
    }
    if (size(checkDuplicate) == 1){
        for (auto& pair: checkDuplicate){
            return 1111 * pair.first;
        }
    }
    if (size(checkDuplicate) == 2){
        int p;
        int q;
        bool isThirdCase = false;
        for (auto& pair: checkDuplicate){
            if (pair.second == 1){
                q = pair.first;
            }
            if (pair.second == 2){
                if (isThirdCase){
                    q = pair.first;
                } else{
                    p = pair.first;
                    isThirdCase = true;
                }
            }
            if (pair.second == 3){
                p = pair.first;
            }
        }
        if (isThirdCase){
            return (p + q) * abs(p - q);
        }
        return pow((10*p + q), 2);
    }
    if (size(checkDuplicate) == 3){
        int answer = 1;
        for (auto& pair: checkDuplicate){
            if (pair.second == 1){
                answer *= pair.first;
            }
        }
        return answer;
    }
    if (size(checkDuplicate) == 4){
        int min = numeric_limits<int>::max() ; 
        for (auto& pair: checkDuplicate){
            if (min > pair.first){
                min = pair.first;
            }
        }
        return min;
    }
    return -1;
}

int main() {
    int a = 6;
    int b = 4;
    int c = 2;
    int d = 5;
    cout << solution(a, b, c, d) << endl;

    return 0;
}
