#include"mytriangle.h"
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))cout << area(a, b, c) << endl;
	else cout << "不能组成三角形" << endl;
	return 0;
}
