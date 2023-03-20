# 題目12. 遞迴程式練習

### 問題描述：

給定下列遞迴函式 :

C_RU06.JPG

請計算出 f (k) 

### 輸入說明：

輸入值為一個大於 1 的整數

### 輸出說明：

f(k) 的計算結果

### 範例：

### Sample Input
10
12
60

### Sample Output
60
94

### 解答

```
#include <iostream>  
using namespace std;  
  
int f(int n) {  
    if (n == 0 || n == 1) {  
        return n+1;  
    }  
    else if (n > 1) {  
        return f(n - 1) + f(n / 2);  
    }  
}  
int main()  
{  
    int n;  
    while (cin >> n) {  
        cout << f(n) << endl;  
    }  
    return 0;  
}  
```
