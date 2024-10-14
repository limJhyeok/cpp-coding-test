#include <iostream>
#include <vector>

std::string solution(std::string my_string, int n){
    return my_string.substr(size(my_string) - n, n);
}


int main(){
    std::string my_string = "ProgrammerS123";
    int n = 11;

    std::string answer = solution(my_string, n);    
    std::cout << answer << std::endl;
}