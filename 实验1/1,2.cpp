#include<iostream>
#define PI 3.1415926
int main()
{
	int R, H;
	std::cout << "请输入圆锥底的半径和锥高\n";
	std::cin >> R >> H;
	std::cout << "圆锥的体积为" << R * R * PI* H / 3 << std::endl;
	return 0;
}