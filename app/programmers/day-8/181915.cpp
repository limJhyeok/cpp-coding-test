// 글자 이어 붙여 문자열 만들기
#include <iostream>
#include <vector>
using namespace std;

string solution(string my_string, vector<int> index_list){
    string answer;
    for (auto num: index_list){
        answer += my_string[num];
    }
    return answer;
}

int main(){
    string my_string = "zpiaz";
    vector<int> index_list = {1, 2, 0, 0, 3};
    cout << solution(my_string, index_list);

    return 0;
}