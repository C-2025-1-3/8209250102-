#include<iostream>
using namespace std;
int yueshu(int m, int n)
{
	int t;
	if (m < n) {
		t = m;
		m = n;
		n = t;
	}
	for (int t = m % n; t != 0; m = n, n = t);
	return n;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout <<"最大公约数为"<< yueshu(m, n) << endl;
	cout << "最大公倍数为" << m * n / yueshu(m, n) << endl;//不需要什么引用参数吧
	return 0;
}