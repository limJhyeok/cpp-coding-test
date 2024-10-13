// 간단한 논리 연산

#include <iostream>
using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4){
    bool leftExpression = (x1) || (x2);
    bool rightExpression = (x3) || (x4);
    return leftExpression && rightExpression;  
}

int main(){
    bool x1 = true;
    bool x2 = false;
    bool x3 = false;
    bool x4 = false;
    cout << boolalpha;
    cout << "answer: " << solution(x1, x2, x3, x4) << endl;
}