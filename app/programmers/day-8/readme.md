### (char, string) type -> (int) type 변환
```cpp
// string -> int
std::string myStr= "123";
std::stoi(myStr);

// charactor -> int
char myChar = '1';
int myInt = (static_cast<int>(myChar) - static_cast<int>('0'));
```

### limit 처리 (ref: 181916.cpp)
```cpp
#include <limits>

int intMax = std::numeric_limits<int>::max();
int intMin = std:;numeric_limits<int>::min();
```

### 최대-최소(두 수)
```cpp
#include <algorithm>

int a = 20;
int b = 30;
std::max(a, b); // 두 개의 수에 대해 min, max값을 구할 때
```

### 최대-최소(세 수 이상) (ref: 181916.cpp)
```cpp
// 시간 복잡도: O(N)
#include <algorithm>
#include <vector>

vector<int> vec = {10, 20, 30};
int minElem = *std::min_element(vec.begin(), vec.end());
```

min_element()나 max_element()는 iterator(반복자)를 반환한다.

따라서 값을 가져올 때에는 "*" 를 잊지 말아야 한다.

---

만약, 최대-최소가 되는 index(즉, argmin 또는 argmax)를 

알고싶다면 다음과 같이 작성하면된다.
```cpp
#include <algorithm>
#include <vector>

vector<int> vec = {10, 20, 30};
int minIndex = std::min_element(vec.begin(), vec.end()) - vec.begin();
```

### string 변수 누적 합
```cpp
#include <numeric>

std::string number = "123456789";
int sum = std::reduce(number.begin(), number.end(), -number.size()*'0');
```
cf) char 변수의 경우 int형으로 변환시 ascii 코드로 변환되므로 

char '1'을 int 1로 변환하기 위해서는 char '0'에 해당하는 ascii 코드를 빼줘야한다. 

### reduce
reduce(first, last, init, policy, op)

**first, last**	-	the range of elements to apply the algorithm to

**init**	-	the initial value of the generalized sum

**policy**	-	the execution policy to use. See execution policy for details.

**op**	-	binary FunctionObject that will be applied in unspecified order to the result of dereferencing the input iterators, the results of other op and init.

ref: [std::reduce -- cppreference](https://en.cppreference.com/w/cpp/algorithm/reduce)

### 거꾸로 뒤집는 법(reverse) (ref: 181913.cpp)
```cpp
#include <algorithm>
std::string my_string = "123456789";
reverse(my_string.begin(), my_string.end());

// 특정 index 구간만 뒤집고 싶으면 아래와 같이 작성
int i = 2;
int j = 3;
reverse(my_string.begin() + i, my_string.begin() + j + 1); // i부터 j index까지 reverse
```