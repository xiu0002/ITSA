# 題目10. 輾轉相除法

### 問題描述：

給定二個正整數，利用輾轉相除法求其最大公因數

### 輸入說明：

給定二個正整數

### 輸出說明：

輸出最大公因數

### 範例：

假設輸入為 300 與 250, 則輸出為 50

### 解答

```
#include <iostream>  
#include <math.h>   
using namespace std;  
  
int main()  
{  
    int a,b;  
    cin >> a >> b;  
  
    while ((a %= b) && (b %= a));  
        cout << a + b << endl;  
  
    return 0;  
}  
```
