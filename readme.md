# CPP coding test

이 리포지토리는 C++ 언어를 사용하여 코딩 테스트를 준비하는 목적으로 작성되었습니다. 프로그래밍 문제 풀이와 다양한 알고리즘을 연습할 수 있도록 구성되어 있습니다.

## Coding Test
1. [프로그래머스 기초문제 (day 1 ~ day 25)](https://github.com/limJhyeok/cpp-coding-test/tree/main/app/programmers)

## 사용법

### container 구동 및 bash 진입
```bash
docker-compose up -d
docker-compose exec cpp-app /bin/bash
```

### 구동된 container 안에서 main.cpp 결과 확인
```bash
./scripts/execute.sh {source_file}.cpp

# 예시
# ./scripts/execute.sh hello_world.cpp
```

### c/c++ extention
1. vscode에서 c/c++ extention 설치
2. gcc/g++ 설치
```bash
sudo apt-get install -y gcc
sudo apt-get install -y g++
```
3. .vscode/c_pp_properites.json 설정

### 자동 포매터(style: google)
1. clang-format, pre-commit 설치
```bash
sudo apt install -y clang-format 
pip install pre-commit
```

### container 종료
```bash
docker-compose down
```

## Util
### 두 함수 실행시간 비교 방법
```cpp
// 경로에 맞게 app/utils/timer_tuils.h 파일 include
#include "../../utils/timer_utils.h" 

...(생략)...

int main(){
    int iterations = 100;  // 반복 실행 횟수

    // void return 값이고 argument도 없을 때
    compareFunctionSpeeds(
        func1,
        func2,
        iterations
    );

    // void return 값이 아니고 argument가 있을 때
    compareFunctionSpeeds(
        [&]() { func1(args); }, 
        [&]() { func2(args); },
        iterations
    );

}

```
