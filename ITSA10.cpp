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

