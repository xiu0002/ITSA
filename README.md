# 題目2. 英哩轉公里

### 問題描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：1 英哩= 1.6 公里

### 輸入說明：
輸入欲轉換之英哩數(int)

### 輸出說明：
輸出公里(double)，取到小數點以下第一位

#### 輸入範例:
90
95

#### 輸出範例:
144.0
152.0

### 解答
```
#include<iostream>    
#include <iomanip>    
using namespace std;

int main()
{
    int mile;
    cin >> mile;
    double km = mile * 1.6;
    cout << setprecision(1) << fixed << km << endl;

    return 0;
}

```

### 說明
 使公里等於英哩乘1.6 輸出小數點後一位的公里
求出來的值可能是小數點
所以定義公里時 不用int 改用double
