## std::accumulate (ref: 181856.cpp)
`std::accumulate` 함수는 C++ 표준 라이브러리의 `<numeric>` 헤더에 포함된 함수로, 범위 내의 모든 요소를 합산하거나 원하는 방식으로 축적(누적)할 수 있도록 돕습니다. 

### 기본 문법

```cpp
#include <numeric>

T accumulate(InputIt first, InputIt last, T init);
T accumulate(InputIt first, InputIt last, T init, BinaryOp op);
```

- `InputIt first, last`: 합계를 구할 범위입니다. `first`는 시작 반복자이고, `last`는 마지막 다음 위치 반복자입니다. (즉, `[first, last)` 범위를 의미함).
- `T init`: 누적 계산의 초기값입니다. 일반적으로 0을 사용하여 합계가 정수 또는 부동 소수점으로 시작되게 합니다.
- `BinaryOp op`: 누적 방식(연산)을 정의하는 함수입니다. 제공되지 않으면 덧셈(`+`)을 기본으로 합니다.

### 기본 사용 예

1. **합계를 구하는 경우**:
   ```cpp
   #include <iostream>
   #include <numeric>
   #include <vector>

   int main() {
       std::vector<int> nums = {1, 2, 3, 4, 5};
       int sum = std::accumulate(nums.begin(), nums.end(), 0); // 초기값 0으로 합산 시작
       std::cout << "Sum: " << sum << std::endl; // Sum: 15
       return 0;
   }
   ```
   위 예제에서는 `nums` 벡터의 모든 요소를 합산하여 `sum`에 저장합니다. 초기값이 0이므로, 벡터의 모든 요소가 더해져 결과는 15가 됩니다.

2. **곱셈을 사용한 누적**:
   ```cpp
   int product = std::accumulate(nums.begin(), nums.end(), 1, std::multiplies<int>());
   ```
   `std::multiplies<int>()`는 요소들을 곱하는 함수 객체입니다. 여기서는 초기값이 `1`로 설정되어, 벡터의 모든 요소가 곱해져 결과가 반환됩니다.

3. **사용자 정의 함수**를 사용한 누적:
   - 예를 들어, 벡터의 모든 요소의 차이를 계산하고 싶다면 다음과 같이 할 수 있습니다.
   ```cpp
   int difference = std::accumulate(nums.begin(), nums.end(), 0, std::minus<int>());
   ```

### 주요 특징

- **범용성**: 기본적으로 덧셈 연산을 하지만, 원하는 연산(곱셈, 뺄셈 등)을 적용하는 사용자 정의 함수도 전달 가능.
- **효율성**: `std::accumulate`는 반복자와 초기값만 필요하므로 코드를 간결하게 하고 성능을 최적화합니다.