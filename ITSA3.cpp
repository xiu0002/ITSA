#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int r = 100, h;
	h = sqrt((x * x) + (y * y));

	if (h < r) {
		cout << "inside" << endl;
	}
	else {
		cout << "outside" << endl;
	}
	return 0;
}