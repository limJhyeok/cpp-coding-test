## std::string::rfind (ref: 181872.cpp)

C++에서 `std::string::rfind` 함수는 문자열 내에서 특정 문자열이나 문자가 마지막으로 등장하는 위치를 찾는 데 사용됩니다. `rfind`는 오른쪽(끝)에서부터 왼쪽(처음) 방향으로 검색을 수행하지만 반환되는 위치 값은 문자열의 처음부터 셉니다.

### 함수 사용법

`rfind` 함수는 다음과 같은 형태로 사용할 수 있습니다:

```cpp
size_t rfind(const std::string& str, size_t pos = npos) const;
size_t rfind(const char* s, size_t pos = npos) const;
size_t rfind(char c, size_t pos = npos) const;
```

여기서:
- `str`은 찾고자 하는 부분 문자열입니다.
- `s`는 찾고자 하는 C-문자열(C-style string)입니다.
- `c`는 찾고자 하는 단일 문자입니다.
- `pos`는 검색을 시작할 위치로, 기본값은 `npos`이며 문자열의 끝에서부터 검색을 시작합니다.
- 반환값은 찾은 문자열이나 문자의 위치를 `size_t`로 반환하며, 찾지 못하면 `std::string::npos`를 반환합니다.

### 예제 코드

```cpp
#include <iostream>
#include <string>

int main() {
    std::string text = "hello world, hello universe";

    // 문자열 "hello"를 마지막으로 찾기
    size_t found = text.rfind("hello");
    if (found != std::string::npos)
        std::cout << "'hello' found at position: " << found << std::endl;

    // 문자 'o'를 마지막으로 찾기
    found = text.rfind('o');
    if (found != std::string::npos)
        std::cout << "'o' found at position: " << found << std::endl;

    return 0;
}
```

### 출력
```
'hello' found at position: 13
'o' found at position: 20
```

이 예제에서 `rfind("hello")`는 문자열 `"hello"`가 마지막으로 등장하는 위치(13)를, `rfind('o')`는 문자 `'o'`가 마지막으로 등장하는 위치(20)를 반환합니다.

## stringstream (ref: 181868.cpp)

`sstream` 라이브러리의 `stringstream`을 사용하여 문자열을 단어 단위로 쉽게 분리할 수 있습니다.

### 코드 설명

```cpp
#include <sstream>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer; // 결과를 저장할 벡터

    string str;            // 단어를 저장할 문자열 변수
    stringstream ss;       // stringstream 객체 생성
    ss.str(my_string);     // my_string을 ss에 저장하여 문자열 스트림으로 변환

    while (ss >> str) {    // 공백을 기준으로 한 단어씩 str에 저장
        answer.emplace_back(str); // answer 벡터에 단어 추가
    }

    return answer;         // 모든 단어가 담긴 answer 벡터 반환
}
```

### 주요 코드 설명

1. **`stringstream ss;` 및 `ss.str(my_string);`**:
   - `stringstream` 객체 `ss`를 생성합니다. `stringstream`은 문자열을 입력 스트림처럼 다룰 수 있는 기능을 제공합니다.
   - `ss.str(my_string);`는 입력 문자열 `my_string`을 `ss`에 저장하여 스트림으로 변환합니다. 이후 `ss`에서 공백 단위로 문자열을 추출할 수 있게 됩니다.

2. **`while (ss >> str)`**:
   - `>>` 연산자는 공백을 기준으로 단어를 추출합니다. `ss`로부터 공백을 기준으로 한 단어씩 읽어 `str`에 저장합니다.
   - 문자열의 끝에 도달할 때까지 반복문이 계속됩니다.

3. **`answer.emplace_back(str);`**:
   - 추출된 단어 `str`을 `answer` 벡터의 끝에 추가합니다. `emplace_back`은 `push_back`과 비슷하지만, 더 효율적으로 객체를 추가할 수 있습니다.

4. **`return answer;`**:
   - 공백을 기준으로 분리된 모든 단어가 담긴 `answer` 벡터를 반환합니다.

### 예제

```cpp
string my_string = "This is an example string";
vector<string> result = solution(my_string);
```

- 이 경우, `result` 벡터는 `{"This", "is", "an", "example", "string"}`이 됩니다.