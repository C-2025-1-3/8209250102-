#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		int n = s[i];
		if (n>64&&n < 91)n +=  32;
		if(n>96&&n<123){
			counts[n-97]++;
		}
	}
}
int main()
{
	char *s=new char[100];
	cin.getline(s,100);
	int counts[26] = { 0 };
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << char(i+97) << ":" << counts[i] << "times\n";
		}
	}
	delete[] s;
	return 0;
}