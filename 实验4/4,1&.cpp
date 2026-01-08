#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	if (strlen(s1) > strlen(s2))return -1;
	for (int i = 0; i <= strlen(s2)-strlen(s1); i++)
	{
		if (s1[0] == s2[i])
		{
			int n = 0;
			for (int j = i; j <= i + strlen(s1) - 1; j++)
			{
				if (s1[j - i] == s2[j])n++;
			}
			if (n == strlen(s1))return i;
		}
	}
	return -1;
}
int main()
{
	char s1[100],  s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	cout << indexof(s1, s2);
	return 0;
}