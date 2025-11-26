#include<iostream>
using namespace std;
int main()
{
	float x;
	cin >> x;
	if (x > 0 and x < 1)cout << 3 - 2 * x << endl;
	else if (x >= 1 and x < 5)cout << 1 + 1 / (2 * x) << endl;
	else cout << x * x << endl;
	return 0;
}