#include<iostream>
#include<cmath>
int main()
{
	double a;
	std::cin >> a;
	double x2=0,x1=a,x3=0;
	x2 = (x1 + a / x1) / 2;
	if (a >= 0)
	{
		for (; std::abs(x2 - x3) >= (1e-5); x1 = x2)
		{
			x3 = x1;
			x2 = (x1 + a / x1) / 2;
		}
		std::cout << x2;
	}//a为正数
	else 
	{ 
	a = -a, x1 = a;
	for (; std::abs(x2 - x3) >= (1e-5); x1 = x2)
	{
		x3 = x1;
		x2 = (x1 + a / x1) / 2;
	}
	std::cout << x2 << "i\n";
	}//a为负数
	return 0;
}