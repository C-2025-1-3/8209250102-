#include<iostream>
using namespace std;
void swap(int* str,int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n&&j>i;j++)
			if (str[i] > str[j])
			{
				int k = str[i];
				str[i] = str[j];
				str[j] = k;
			}
	
}
int main()
{
	int* str = new int[100];
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> str[i];
	swap(str, n);
	for (int i = 0; i < n; i++)
		cout << str[i];
	delete str;
	return 0;
}
