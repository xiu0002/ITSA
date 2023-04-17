#include <iostream>
#include <string>
using namespace std;

string add(string a, string b) {
    string res = "";
    int carry = 0, sum;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        carry = sum / 10;
        sum %= 10;
        res = (char)(sum + '0') + res;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        string sum = add(a, b);
        cout << sum << endl;
    }
    return 0;
}
