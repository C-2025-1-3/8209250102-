#include<iostream>
using namespace std;

int dou(int x)
{
	int sum = 1;
	for (int i = 0; i < x; i++)
	{
		sum *= 16;
	}
	return sum;
}
int parseHex(const char* const hexString)
{
	int n = strlen(hexString),sum=0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (hexString[i] == 'A')  sum += 10 * dou(n - i - 1); 
		else if (hexString[i] == 'B')sum += dou(n - i - 1)*11;
		else if (hexString[i] == 'C')sum += dou(n - i - 1)*12;
		else if (hexString[i] == 'D')sum += dou (n - i - 1)*13;
		else if (hexString[i] == 'E')sum += dou(n - i - 1)*14;
		else if (hexString[i] == 'F')sum += dou (n - i - 1)*15;
		else sum += (int(hexString[i])-48)*dou(n-i-1);
	}
	return sum;
}
int main()
{
	char  str[100];
	cin.getline(str, 100);
	char* hexString = str;
	cout << parseHex(hexString);
}