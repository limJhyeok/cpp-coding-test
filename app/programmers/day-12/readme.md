### 181895.cpp
#### 이점
1. push_back의 경우 메모리를 계속 재할당하므로 성능 저하 유발 가능하므로 미리 할당하여 성능 저하 가능성 차단
2. insert 함수로 한 번에 범위를 추가하여 중첩 반복문 제거
```cpp
std::vector<int> solution(std::vector<int> arr, std::vector<std::vector<int>> intervals) {
    // intervals의 모든 범위를 계산해 answer에 필요한 용량을 미리 예약
    int total_size = 0;
    for (const auto& interval : intervals) {
        total_size += (interval[1] - interval[0] + 1);
    }

    std::vector<int> answer;
    answer.reserve(total_size);  // 필요한 메모리 공간을 미리 할당

    // 구조 분해 할당 대신, 각각의 interval에서 a와 b를 명시적으로 추출
    for (const auto& interval : intervals) {
        int a = interval[0];
        int b = interval[1];
        answer.insert(answer.end(), arr.begin() + a, arr.begin() + b + 1);
    }

    return answer;
}

```