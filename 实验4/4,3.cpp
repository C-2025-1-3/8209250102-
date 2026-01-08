#include<iostream>
using namespace std;
int main()
{
	bool a[100] = {0};
	for (int i = 0; i < 100; i++)
		for (int j = i; j < 100; j = 1 + i + j)//这隔2个的意思是中间空1个还是两个啊
		{
			if (a[j])a[j] = 0;
			else a[j] = 1;
		}
	for (int i = 0; i < 100; i++)
		if (a[i])cout << i + 1 << " ";
	return 0;
}