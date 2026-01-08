#include<iostream>
using namespace std;
int tao(int n) {
	int t;
	if (n == 1) t = 1;
	else t = (tao(n - 1) + 1) * 2;
	return t;
}
int main()
{
	cout << tao(10) << endl;
	return 0;
}