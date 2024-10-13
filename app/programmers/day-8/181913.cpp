#include <iostream>
#include <vector>
using namespace std;

string solution(string my_string, vector<vector<int>> queries){
    for (auto query: queries){
        int s = query[0];
        int e = query[1];
        int j = e;
        for (int i = s; i < e; i++){
            swap(my_string[i], my_string[j]);
            j--; 
            if (j <= i){
                break;
            }
        }
    }
    return my_string;
}

int main(){
    string my_string = "rermgorpsam";
    vector<vector<int>> queries = {
        {2, 3},
        {0, 7},
        {5, 9},
        {6, 10}
    };
    my_string = solution(my_string, queries);
    cout << my_string << endl;

}