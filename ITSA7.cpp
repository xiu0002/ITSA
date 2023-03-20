#include<iostream>
using namespace std;

int main() {
    int n;
    char w;
    cin >> n;
    while (n--)
    {
        int a1, a2, b1, b2;
       
        cin >> w >> a1 >> a2 >> b1 >> b2;
        switch (w) {
        case '+':cout << a1 + b1 << " " << a2 + b2 << endl;
            break;
        case '-':cout << a1 - b1 << " " << a2 - b2 << endl; 
            break;
        case '*':cout << a1 * b1 - a2 * b2 << " " << a2 * b1 + a1 * b2 << endl; 
            break;
        case '/':cout << (a1 * b1 + a2 * b2) / (b1 * b1 + b2 * b2) << " " << (a2 * b1 - a1 * b2) / (b1 * b1 + b2 * b2) << endl;
            break;
        }
    }

}