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
