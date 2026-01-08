#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int n = 0, i = 0, j = 0; n < size1 + size2; n++)
	{	
		
		if (i == size1)list3[n] = list2[j],j++;
		else if (j == size2)list3[n] = list1[i],i++;
		else if (list1[i] <= list2[j])
		{
			list3[n] = list1[i];
			i++;
		}
		else list3[n] = list2[j], j++;
	}
}
int main()
{
	int size1, size2;
	int* list1 = new int[80];
	int* list2 = new int[80];
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
		cin >> list1[i];
	cout << "Enter list2:";
	cin >> size2;
	int* list3 = new int[size1+size2];
	for(int i = 0; i < size2; i++)
		cin >> list2[i];
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is " ;
	for (int i = 0; i < size1 + size2; i++)
		cout << list3[i] << " ";
	return 0;

}