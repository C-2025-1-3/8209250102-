#include<iostream>
using namespace std;
class Student
{
public:
	int num[5], point[5];
	Student()
	{
		num[0] = 1;
		num[1] = 2;
		num[2] = 3;
		num[3] = 4;
		num[4] = 5;
		point[0] = 10;
		point[1] = 20;
		point[2] = 30;
		point[3] = 40;
		point[4] = 60;
	}
};
void max(int num[], int point[])
{
	for (int i = 0, k = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
			if (point[i] >= point[j])k++;
		if (k == 4 - i) {
			cout << "学号为" << num[i] << "的同学成绩最高，为" << point[i];
			
		}
		k = 0;
	}
	cout << "学号为" << num[5] << "的同学成绩最高，为" << point[5];
	
}
int main()
{
	Student stu;
	int num[5], point[5];
	for (int i = 0; i < 5; i++)
		num[i] = stu.num[i],
		point[i] = stu.point[i];
	cout<<max(num[4], point[4]);//????好怪啊，明明没有返回值，但却能输出想要的结果，没有cout反而什么都不输出
	return 0;

}