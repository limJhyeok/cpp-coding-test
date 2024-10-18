### 181900.cpp
불필요한 char 변환하여 erase
```cpp
std::string solution(std::string my_string, std::vector<int> indicies){
    std::string answer;
    for (auto num: indicies){
        my_string[num] = ' ';
    }
    for (auto c: my_string){
        if (c != ' '){
            answer += c;            
        }
    }
    return answer;
}
```