### std::transform (참고:  181878.cpp)
컨테이너(예: 배열, 벡터 등)나 범위 내의 원소들에 대해 지정한 연산을 적용하여 변환할 때 사용

이 함수는 #include <algorithm> 헤더에 정의되어 있으며, 두 가지 주요 형태로 사용할 수 있습니다:

#### 1. 단일 범위에서 변환 (Unary Operation)
이 형태는 하나의 범위 내에서 원소들을 변환하는 데 사용됩니다.

```cpp
std::transform(first1, last1, result, op);
```
first1, last1: 변환할 범위의 시작과 끝을 가리키는 반복자(iterator).

result: 변환된 값을 저장할 곳(출력 반복자).

op: 각 원소에 적용할 연산(함수 또는 함수 객체).


**예시 - 모든 문자를 대문자로 변환하는 경우**
```cpp
#include <iostream>
#include <string>
#include <algorithm>  // for transform
#include <cctype>     // for toupper

int main() {
    std::string s = "hello";
    
    // 모든 문자를 대문자로 변환
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    std::cout << s << std::endl;  // "HELLO"
    return 0;
}
```

이 예제에서는 s.begin()에서 s.end()까지의 문자열을 대상으로 toupper 함수를 적용하여 문자를 대문자로 변환합니다. 변환된 결과는 원래 문자열 s에 저장됩니다.

#### 2. 두 개의 범위를 사용한 변환 (Binary Operation)
이 형태는 두 범위의 원소들을 동시에 읽어들이면서 연산을 적용하고, 그 결과를 저장하는 경우에 사용됩니다.

```cpp
std::transform(first1, last1, first2, result, op);
```
first1, last1: 첫 번째 범위의 시작과 끝을 가리키는 반복자(iterator).

first2: 두 번째 범위의 시작을 가리키는 반복자.

result: 변환된 값을 저장할 곳(출력 반복자).

op: 두 원소에 적용할 연산(함수 또는 함수 객체).

**예시 - 두 배열의 원소를 더하는 경우**

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5, 6};
    std::vector<int> result(3);
    
    // v1과 v2의 각 원소를 더한 값을 result에 저장
    std::transform(v1.begin(), v1.end(), v2.begin(), result.begin(), std::plus<int>());
    
    for (int n : result) {
        std::cout << n << " ";  // 출력: 5 7 9
    }
    return 0;
}
```
여기서 v1과 v2의 각 원소를 더한 결과가 result 벡터에 저장됩니다.

### std::string::find (참고:  181878.cpp)
C++의 std::string::find 함수는 문자열에서 특정 서브스트링(부분 문자열)이나 문자(단일 문자)를 검색할 때 사용되는 함수입니다. 

이 함수는 검색하려는 문자열이나 문자가 대상 문자열에서 처음 나타나는 위치를 반환합니다. 

검색하는 대상이 존재하지 않으면 std::string::npos를 반환합니다.


```cpp
// 함수 시그니처:
size_t find (const string& str, size_t pos = 0) const noexcept;
size_t find (const char* s, size_t pos = 0) const;
size_t find (char c, size_t pos = 0) const noexcept;
```
#### 매개변수:
1. str: 검색하려는 서브스트링 (부분 문자열).
2. s: 검색할 C 스타일의 문자열 (null-terminated char array).
3. c: 검색할 단일 문자.
4. pos: 검색을 시작할 인덱스. 기본값은 0이며, 문자열의 처음부터 검색이 시작됩니다.
#### 반환값:
검색된 부분 문자열이나 문자가 처음 등장한 위치의 인덱스(0부터 시작하는 인덱스)를 반환합니다.

검색하는 내용이 문자열에 없을 경우 **std::string::npos**를 반환합니다.

std::string::npos는 문자열의 끝을 의미하는 값으로, -1과 동일합니다 (실제로는 unsigned 값으로 표현됨).

```cpp
// 사용 예시 - 부분 문자열 찾기

#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    std::string target = "world";
    
    size_t found = str.find(target);
    
    if (found != std::string::npos) {
        std::cout << "'world' found at index: " << found << std::endl;
    } else {
        std::cout << "'world' not found" << std::endl;
    }
    
    return 0;
}
```
출력:
```bash
'world' found at index: 7
```

```cpp
// 사용 예시 - 단일 문자 찾기
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    
    size_t found = str.find('o');
    
    if (found != std::string::npos) {
        std::cout << "'o' found at index: " << found << std::endl;
    } else {
        std::cout << "'o' not found" << std::endl;
    }
    
    return 0;
}
```
출력:

```bash
'o' found at index: 4
```
첫 번째 'o'는 4번 인덱스에서 발견됩니다.

```cpp
// 사용 예시 - 검색 시작 위치 지정
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    
    // 5번째 인덱스부터 'o'를 찾는다
    size_t found = str.find('o', 5);
    
    if (found != std::string::npos) {
        std::cout << "'o' found at index: " << found << std::endl;
    } else {
        std::cout << "'o' not found" << std::endl;
    }
    
    return 0;
}
```

출력:
```bash
'o' found at index: 8
```
인덱스 5 이후에 첫 번째 'o'가 8번 인덱스에서 발견됩니다.

예외 사항:

없음: std::string::find는 검색 대상이 존재하지 않을 때 예외를 던지지 않고 std::string::npos를 반환합니다. 따라서 예외 처리가 필요하지 않습니다.

요약:

**std::string::find** 함수는 문자열에서 특정 부분 문자열이나 문자를 검색할 때 유용하며, 찾고자 하는 패턴의 첫 번째 위치를 반환합니다. 검색 결과가 없을 경우 **std::string::npos**를 반환하므로, 이를 활용해 결과를 검출할 수 있습니다.