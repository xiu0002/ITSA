#include <iostream>
using namespace std;

int main() {
    int a, b, count = 0;
    cin >> a >> b;
    int box[a * b];
    for (int i = 0; i < (a * b); i++) {
        cin >> box[i];
    }
    for (int y = 0; y < b; y++) {
        for (int x = 0; x < a; x++) {
            count++;
            cout << box[x * b + y];
            if (count % a != 0) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}