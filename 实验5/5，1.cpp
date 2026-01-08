#include<iostream>
using namespace std;
class Time             // ¶¨ÒåTimeÀà
{
public:   
	void in_out()
	{
		cin >> hour >> minute >> sec;
		cout << hour << "£º" << minute << "£º" << sec << endl;
	}
private:
int hour;
int minute;
int sec ;
};
int main()
{
Time t1;
t1.in_out();
return 0;
}
