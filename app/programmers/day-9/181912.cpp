#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l){
    vector<int> answer;
    for (string var: intStrs){
        string strSlice = var.substr(s, l);
        int intSlice = stoi(strSlice);
        if (intSlice > k){
            answer.push_back(intSlice);
        }
    }
    return answer;
}

int main(){
    int k = 50000;
    int s = 5;
    int l = 5;
    vector<string> intStrs = {
        "0123456789",
        "9876543210",
        "9999999999999"
    };
    vector<int> answer = solution(intStrs, k, s, l);
    for (auto num: answer){
        cout << num << endl;
    }

    // vector<string> subVec(intStrs[0].begin() + 5, intStrs[0].begin() + 10);
}