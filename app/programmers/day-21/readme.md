### sort와 사용자 정의 함수 이용해서 정렬하는 방법(ref: 181851.cpp)
e. g., sort 함수를 이용해서 td::vector내 pair의 value를 기준으로 오름차순 정렬하는 방법

```cpp
#include <algorithm>

bool valueComp(std::pair<int,int> map1, std::pair<int,int> map2)
{
    return map1.second < map2.second;
}
int main(){
    std::vector<int> arr = {3, 1, 2, 4, 5};
    std::vector<int> order = {5, 4, 3, 2, 1};

    std::vector<std::pair<int, int>> vec;
    for (int i = 0; i < size(arr); i++){
        vec.push_back({arr[i], order[i]});
    };
    
    sort(vec.begin(), vec.end(), valueComp);

    for (std::pair p: vec) {
        std::cout << p.first << " : " << p.second << std::endl;
    }
    // >> cout
    // 5 : 1
    // 4 : 2
    // 2 : 3
    // 1 : 4
    // 3 : 5
}
```