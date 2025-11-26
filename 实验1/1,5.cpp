#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float C, F;
	cout << "请输入华摄氏度\n";
	cin >> F;
	cout << "等效于" << fixed << setprecision(2) << (F - 32) / 1.8 << "摄氏度\n" << endl;
	return 0;
}