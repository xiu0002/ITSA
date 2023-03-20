#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x;

    for (y = 2; y < x; y++) {
        if (x % y == 0) {
            break;
        }
    }
        if (y == x) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    
    return 0;
}

