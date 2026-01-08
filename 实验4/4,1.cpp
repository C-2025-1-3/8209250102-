#include<iostream>
using namespace std;
int main()
{
	int a[10],k=0 ;
	int* dis = new int[0];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (int i = 1; i <10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])k = 1;
		}
		if (k == 0) { 
			cout << a[i] << " "; 
			dis[k] = a[i];
			k++;
		}
		k = 0;
	}
	return 0;
}