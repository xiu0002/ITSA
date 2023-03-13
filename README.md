# ITSA題目3. 判斷座標是否在圓形的範圍內

### 問題描述：
有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)

### 輸入說明：
輸入一整數座標，依序分別X與Y

###輸出說明：
輸出此座標位置在圓內或圓外訊息

#### 輸入範例:
50 50
200 200

#### 輸出範例:  
inside
outside

### 解答
```
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int r = 100, h;
	h = sqrt( (x * x) + (y * y) );

	if (h < r) {
		cout << "inside" << endl;
	}
	else{
		cout << "outside" << endl;
	}
	return 0;
}
```

### 說明
定義 點 半徑 斜邊
用畢氏定理求斜邊
斜邊小於等於半徑即在園內
則反之
