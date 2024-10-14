### vector 정렬하는 방법
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> vec={0, 4, 3, -1};
    sort(vec.begin(), vec.end());
    for (auto num: vec){
        std::cout << num << std::endl;
    }
}
```
