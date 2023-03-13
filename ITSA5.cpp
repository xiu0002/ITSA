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