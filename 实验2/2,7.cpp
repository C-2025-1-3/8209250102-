#include<iostream>
int main()
{
	for (int n = 1; n <= 5; n++)
	{
		for (int m = 1; m <= n; m++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}