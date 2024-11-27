#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int j = 0; j < size1 + size2; j++)
	{
		if (j < size1) { list3[j] = list1[j]; }
		if (j >= size1) { list3[j] = list2[j-size1]; }
	}
	for (int i = 0; i < size1+size2; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (list3[i] <list3[j])
			{
				int t = list3[i];
				list3[i] = list3[j];
				list3[j] = t;
			}
		}
	}
	for (int k = 0; k < size1 + size2; k++)
	{
		cout << list3[k] << " ";
	}
}
int main()
{
	int list1[80], list2[80],list3[180]; int size1, size2;
	cout << "enterlist1"; 
	cin >> size1;
	for (int k = 0; k < size1; k++) { cin >> list1[k]; }
	cout<<"enterlist2"
	cin >> size2;
	for (int k = 0; k < size2; k++) { cin >> list2[k]; }
	cout << "list3";
	merge(list1, size1, list2, size2, list3);
}