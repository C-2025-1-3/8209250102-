#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int X = 60, int Y = 80)
	{
		x = X, y = Y;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i, y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point point;
	point.display();
	int num1, num2;
	cin >> num1 >> num2;
	point.setPoint(num1, num2);
	point.display();
	return 0;
}