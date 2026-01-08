#include<iostream>
using  namespace std;
bool is_prime(int num)
{
	int k = 0;
	for (int t = 2; t * t < num; t++) {
		if ( num % t == 0)k=1;
	}
	if (k)return false;
	else return true;
}
int main()
{	
	
	for (int n = 1,sum=0; n < 201; n++)
	{
		if (is_prime(n)) {
			cout << n << "\t";
			sum++;
		}
		if (sum == 10) {
			cout << endl;
			sum = 0;
		}
	};
	
	return 0;
}