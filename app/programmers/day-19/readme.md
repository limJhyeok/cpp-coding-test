### std::string 공백 제거하기 (ref: 181862.cpp)
```cpp
#include <iostream>
#include <sstream>

int main() {
    std::string myStr = "hello, world. I'm a developer.";    
    std::string str;
    std::stringstream ss;
    
    // 문자열을 stringstream에 설정
    ss.str(myStr);
    
    // stringstream에서 단어를 공백 기준으로 읽어오기
    while(ss >> str) {
        std::cout << str << std::endl;  // 읽어온 단어 출력
    }

    return 0;
}
```
#### 코드 설명
std::stringstream ss;: 문자열 스트림 객체 ss를 생성합니다.

ss.str(myStr);: myStr을 stringstream에 설정하여, 이후 이 스트림에서 데이터를 읽을 수 있게 합니다.

while(ss >> str): 스트림에서 단어를 읽어옵니다. 공백을 기준으로 단어가 분리되며, 읽어온 단어는 임시 문자열 str에 저장됩니다.

#### 출력결과
```plaintext
hello,
world.
I'm
a
developer.
```
### std::vector::insert vector에 요소 추가하기 (ref: 181861.cpp)

`std::vector::insert`는 C++의 `std::vector` 컨테이너에서 요소를 원하는 위치에 삽입할 때 사용하는 멤버 함수입니다. 이 함수는 단일 요소뿐만 아니라 반복자 범위를 지정해 여러 요소를 한 번에 삽입할 수도 있습니다.

#### `std::vector::insert` 함수 형식

`insert` 함수는 여러 오버로드가 존재하며, 주요 형식은 다음과 같습니다.

1. **단일 요소 삽입**
   ```cpp
   iterator insert(iterator pos, const T& value);
   ```
   - **설명**: `pos` 위치에 `value`를 삽입합니다.
   - **반환값**: 새로 삽입된 요소를 가리키는 반복자.
   - **시간복잡도**: 최악의 경우 O(N) (재할당 발생 시).
   - **예제**:
     ```cpp
     std::vector<int> vec = {1, 2, 4};
     vec.insert(vec.begin() + 2, 3); // vec: {1, 2, 3, 4}
     ```

2. **여러 개의 동일한 요소 삽입**
   ```cpp
   iterator insert(iterator pos, size_type count, const T& value);
   ```
   - **설명**: `pos` 위치에 `count`개의 `value` 요소를 삽입합니다.
   - **반환값**: 첫 번째로 삽입된 요소를 가리키는 반복자.
   - **예제**:
     ```cpp
     std::vector<int> vec = {1, 2};
     vec.insert(vec.end(), 3, 5); // vec: {1, 2, 5, 5, 5}
     ```

3. **반복자 범위를 사용한 삽입**
   ```cpp
   template <class InputIt>
   iterator insert(iterator pos, InputIt first, InputIt last);
   ```
   - **설명**: `first`에서 `last`까지의 모든 요소를 `pos` 위치에 삽입합니다.
   - **반환값**: 첫 번째로 삽입된 요소를 가리키는 반복자.
   - **예제**:
     ```cpp
     std::vector<int> vec1 = {1, 2};
     std::vector<int> vec2 = {3, 4, 5};
     vec1.insert(vec1.end(), vec2.begin(), vec2.end()); // vec1: {1, 2, 3, 4, 5}
     ```

4. **초기화 리스트를 사용한 삽입 (C++11 이상)**
   ```cpp
   iterator insert(iterator pos, std::initializer_list<T> ilist);
   ```
   - **설명**: `initializer_list`의 모든 요소를 `pos` 위치에 삽입합니다.
   - **반환값**: 첫 번째로 삽입된 요소를 가리키는 반복자.
   - **예제**:
     ```cpp
     std::vector<int> vec = {1, 2};
     vec.insert(vec.end(), {3, 4, 5}); // vec: {1, 2, 3, 4, 5}
     ```

#### `std::vector::insert`의 특성 및 주의사항

- **재할당 가능성**: `insert` 함수 호출 시 벡터의 크기가 용량을 초과하면 새로운 메모리가 할당되어 모든 요소가 복사됩니다. 이는 시간복잡도에 영향을 미칠 수 있습니다.
- **성능 영향**: `pos` 위치 뒤의 모든 요소가 한 칸씩 뒤로 이동해야 하므로, 벡터의 중간이나 앞에 요소를 삽입하면 오버헤드가 발생할 수 있습니다.
- **반복자 무효화**: 삽입 후에는 벡터의 크기가 변경되므로 기존의 반복자가 무효화될 수 있습니다.

### std::vector::erase: vector에 요소나 범위 제거하기 (ref: 181860.cpp)
`std::vector::erase`는 C++의 `std::vector`에서 특정 위치의 요소나 요소 범위를 삭제하는 멤버 함수입니다. 이 함수는 삭제된 이후의 요소들을 앞으로 이동시켜, 중간에 빈 공간이 없도록 만듭니다. 단일 요소 삭제와 범위 삭제를 모두 지원합니다.

### `std::vector::erase` 함수 형식

1. **단일 요소 삭제**
   ```cpp
   iterator erase(iterator pos);
   ```
   - **설명**: `pos` 위치에 있는 요소를 삭제합니다.
   - **반환값**: 삭제된 요소 다음 위치의 반복자를 반환. 마지막 요소가 삭제된 경우 `end()` 반복자를 반환.
   - **시간복잡도**: O(N) (N은 `pos` 뒤에 있는 요소의 개수).
   - **예제**:
     ```cpp
     std::vector<int> vec = {1, 2, 3, 4, 5};
     vec.erase(vec.begin() + 2); // vec: {1, 2, 4, 5}
     ```

2. **범위 삭제**
   ```cpp
   iterator erase(iterator first, iterator last);
   ```
   - **설명**: `[first, last)` 범위 내의 요소들을 삭제합니다. `first`는 삭제할 첫 요소의 위치, `last`는 범위 끝을 나타냅니다 (삭제하지 않음).
   - **반환값**: 삭제된 요소들 다음 위치의 반복자를 반환. `last`가 벡터의 끝일 경우 `end()` 반복자를 반환.
   - **시간복잡도**: O(N) (N은 `last` 뒤에 있는 요소의 개수).
   - **예제**:
     ```cpp
     std::vector<int> vec = {1, 2, 3, 4, 5};
     vec.erase(vec.begin() + 1, vec.begin() + 4); // vec: {1, 5}
     ```

### `std::vector::erase`의 특성 및 주의사항

- **성능 고려사항**: `erase` 함수는 지정된 위치 이후의 모든 요소를 앞으로 이동시키므로, 삭제 작업이 벡터의 앞쪽에서 수행될수록 오버헤드가 커질 수 있습니다. 벡터의 뒤쪽에서 삭제할수록 성능에 더 유리합니다.
- **반복자 무효화**: `erase`가 호출되면, 삭제된 요소 이후의 모든 반복자와 참조가 무효화됩니다.
- **메모리 관리**: `erase`는 벡터의 용량을 줄이지 않습니다. 요소가 삭제되더라도 할당된 메모리는 유지되므로, 메모리 사용량을 줄이고 싶다면 `shrink_to_fit`을 추가로 호출할 수 있습니다.