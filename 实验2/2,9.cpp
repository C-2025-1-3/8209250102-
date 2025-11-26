#include<iostream>
int main()
{
	int apple = 2,day=0;
	float sum = 0;
	while (apple <= 100)
	{
		sum = sum + 0.8 * apple;
		apple = apple * 2;
		day++;
	}
	std::cout << sum / day << std::endl;
	return 0;
}