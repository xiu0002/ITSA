#include<iostream>
#include<sstream>
using namespace std;
int main() {
	string input, str;
	int mon[4];

	getline(cin, input);
	istringstream cut(input);
	for (int i = 0; i < 4; i++)
	{
		getline(cut, str, ',');
		istringstream sa(str);
		sa >> mon[i];
	}
	if (mon[0] > mon[1] * 15 + mon[2] * 20 + mon[3] * 30) 
	{
		mon[0] = mon[0] - mon[1] * 15 - mon[2] * 20 - mon[3] * 30; 
		mon[2] = mon[0] / 50; mon[0] %= 50;
		mon[1] = mon[0] / 5; mon[0] %= 5;
		cout << mon[0] << "," << mon[1] << "," << mon[2] << endl; return 0;
	}
	else cout << "0" << endl; return 0;
}