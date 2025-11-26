#include<iostream>
using namespace std;
int main()
{
	char c;
	int ZiMu = 0, KongGe = 0, ShuZi = 0, QiTa = 0;
	cout << "请输入一串字符\n";
	
	while ((c = getchar() )!= '\n')
	{
		if ((int(c) > 64 and int(c) < 91) or (int(c) > 96 and int(c) < 123))ZiMu++;
		else if (int(c) == 32)KongGe++;
		else if (int(c) > 47 and int(c) < 58)ShuZi++;
		else QiTa++;
	}
	cout << "共有" << ZiMu << "个字母，" << KongGe << "个空格，" << ShuZi << "个数字，" << QiTa <<"个其他字符"<< endl;
	return 0;
}