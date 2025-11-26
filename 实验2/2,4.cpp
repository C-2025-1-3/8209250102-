#include<iostream>
using namespace std;
int main()
{
	char i;
	int a, b;
	cin >> a >> i >> b;
	if (int(i) == 43)cout << a + b;
	if (int(i) == 45)cout << a - b;
	if (int(i) == 42)cout << a * b;
	if (int(i) == 47 and b !=0)cout << a / b;
	else if(b==0)cout << "除法分母不为0\n";
	if (int(i) == 37 and b != 0)cout << a % b;
	else if(b==0)cout << "取余分母不为0\n";
	if (i != '+' and i != '-' && i != '*' && i != '/' && i != '%')cout << "运算符非法\n";
	return 0;
}