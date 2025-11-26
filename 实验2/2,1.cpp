#include<iostream>
using namespace std;
int main()
{
	char i;
	cin >> i;
	if (int(i) > 96 and int(i) < 123)i = i - 32, cout << char(i)<<endl;
	else cout << int(i) + 1<<endl;
	return 0;
}