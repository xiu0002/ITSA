# 題目5. 十進制轉二進制

### 問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示

### 輸入說明：
輸入一個整數，介於-128～127之間

###輸出說明：
以8位元的二進制顯示

#### 輸入範例:

15
-2

#### 輸出範例:

00001111
11111110

### 解答


#include<iostream>  
using namespace std;

int main() {
    int x = 0 , a[8] , i;

    cin >> x;
    if (x < 0)
    {
        x += 256;  
    }
    for (i = 7; i >= 0; i--)
    {
        a[i] = x % 2;
        x /= 2;
    }
    for (i = 0; i < 8; i++)
    {
        cout << a[i];
    }
         cout << endl;

    return 0;
}
