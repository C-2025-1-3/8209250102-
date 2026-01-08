#include<iostream>
#include<string>
using namespace std;
int indexOf(const string s1, const string s2)
{
	int sum = 0,n=0;
	if (s1.length() > s2.length())return -1;
	for (int i = 0; i < s2.length()-s1.length(); i++)
	{
		if (s1[0] == s2[i])
		{
			for (int j = i; j <= i + s1.length() - 1; j++)
				if (s1[j-i] == s2[j])
				{
					n++;
				}
			if (n == s1.length())return i;
		}
		n = 0;
	}
	return -1;
}
int main()
{
	string s1, s2;
	cout << "Enter the first string:";
	getline(cin, s1);
	cout << "Enter the second string:";
	getline(cin, s2);
	cout << "indexOf(¡°";
	for (int i = 0; s1[i] != '\0'; i++)
		cout << s1[i];
	cout << "¡±, ¡°";
	for (int i = 0; s2[i] != '\0'; i++)
		cout << s2[i];
	cout << "¡±) is " << indexOf(s1, s2);
	return 0;
}