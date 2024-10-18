// 문자열 뒤집기
#include <iostream>
#include <algorithm>
std::string solution(std::string my_string, int s, int e){
    reverse(my_string.begin() + s, my_string.begin() + e + 1);
    return my_string;
}

int main(){
    std::string my_string = "Stanley1yelnatS";
    int s = 4;
    int e = 10;
    std::cout << solution(my_string, s, e) << std::endl;
}