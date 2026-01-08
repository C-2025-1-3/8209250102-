#include<iostream>
using namespace std;
class Ver
{
private:
	int length, width, height;
public:
	void mth(int i)
	{
		cin >> length >> width >> height;
		cout <<"第"<<i<<"个长方体的体积为" << length * width * height<<endl;
	}
};
int main()
{
	Ver ti;
	cout << "请分别输入3个长方体的长宽高"<<endl;
	for (int i = 1; i < 4; i++)
		ti.mth(i);
	return 0;
}