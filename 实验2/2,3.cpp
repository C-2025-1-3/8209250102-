#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if ((a + b) > c and (a + c) > b and (b + c) > a)cout << "周长为" << a + b + c << endl;
	else cout << "不能构成三角形\n";
	if ((a + b) > c and (a + c) > b and (b + c) > a and (a == b or a == c or b == c))cout << "是等腰三角形\n";
	return 0;
}