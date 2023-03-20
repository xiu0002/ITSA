### 題目13. 撲克牌大小

### 問題描述 ：

撲克牌的遊戲有很多種，像是大老二、撿紅點等。然而，現在您要參與的是比大小遊戲，每張牌各有其花色和數字，大小比較主要以花色為主，黑桃 > 紅心 > 方塊 > 梅花；倘若花色相同時，則比較數字

### 輸入說明 ：

第一列的整數，代表撲克牌的疊數，其後有若干列，每列即為一疊牌的內容，每張牌分別以英文、數字作表示，其中 S 代表黑桃、 H 代表紅心、 D 代表方塊、 C 代表梅花。每筆資料分別以空白隔開

### 輸出說明 ：

印出排列過後的撲克牌。一行是一 疊 牌， 每張牌以空白隔開

### 範例 ：

### 輸入範例
4
H5 D4 S2 C13
D8 S3 D10 C12 H7
H6 S3
C5 D11 S1

### 輸出範例

S2 H5 D4 C13
S3 H7 D10 D8 C12
S3 H6
S1 D11 C5

### 解答

 ```
#include <iostream>  
#include <string.h>  
#include <string>  
#include <sstream>  
#include <cstdlib>  
#include <stdio.h>  
#include <vector>  
using namespace std;  
int display(char a) {  
    int d = 0;  
    switch (a)  
    {  
    case 'S':  
        d = 300;  
        break;  
    case 'H':  
        d = 200;  
        break;  
    case 'D':  
        d = 100;  
        break;  
    }  
    return d;  
}  
int main() {  
    int n = 3, jr[10];  
    string  list[10];//[3]={"D3 H5 D12 C10","D12 H1 S2","H9 D9 C9 C1" };       
    string dir;  
    string Card[20][20];  
    int D[20][20];  
    int j = 0;  
    cin >> n;  
    cin.ignore(1, '\n');  
    for (int i = 0; i < n; i++) {  
        getline(cin, list[i]);  
        istringstream ss(list[i]);  
        while (getline(ss, dir, ' '))  
        {  
            Card[i][j] = dir;  
            if (dir.size() == 3) {  
                D[i][j] = 0;  
                D[i][j] = display(dir[0]);  
                D[i][j] = D[i][j] + stoi(dir.substr(1));  
            }  
            else  if (dir.size() == 2) {  
                D[i][j] = 0;  
                D[i][j] = display(dir[0]);  
                D[i][j] = D[i][j] + stoi(dir.substr(1));  
                //cout<<"size=2-"<<j<<"-"<<D[j]<<endl;  
            }  
            j++;  
        }  
        for (int x = 0; x < j; x++) {  
            for (int y = 0; y < j - 1; y++) {  
                string t;  
                int d;  
                if (D[i][x] > D[i][y]) {  
                    d = D[i][x];  
                    D[i][x] = D[i][y];  
                    D[i][y] = d;  
                    t = Card[i][x];  
                    Card[i][x] = Card[i][y];  
                    Card[i][y] = t;  
                }  
            }  
        }  
        jr[i] = j;  
        j = 0;  
    }  
    for (int p = 0; p < n; p++) {  
        for (int q = 0; q < jr[p]; q++)  
        {  
            if (jr[p] - 1 > q)cout << Card[p][q] << " ";  
            else {  
                cout << Card[p][q];  
            }  
        }  
        if (p < n - 1)cout << endl;  
    }  
  
    return 0;  
}  
 ```
