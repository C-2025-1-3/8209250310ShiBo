#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
		list3[i] = list1[i];
	for (int i = size1; i < size1 + size2; i++)
		list3[i] = list2[i - size1];
	bool changed = true;
	int carry;
	do
	{
		changed = false;
		for (int i = 0; i < size1 + size2 - 1; i++)
			if (list3[i] > list3[i + 1])
			{
				carry = list3[i];
				list3[i] = list3[i + 1];
				list3[i + 1] = carry;
				changed = true;
			}
	} while (changed);
}
int main()
{
	int size1, size2;
	cout << "Enter list1:";
	cin >> size1;
	int* gp1 = new int[size1];
	for (int i = 0; i < size1; i++)
		cin >> gp1[i];
	cout << "Enter list2:";
	cin >> size2;
	int* gp2 = new int[size2];
	for (int i = 0; i < size2; i++)
		cin >> gp2[i];
	int* list = new int[size1 + size2];
	merge(gp1, size1, gp2, size2, list);
	cout << "The merged list is:";
	for (int i = 0; i < size1 + size2; i++)
		cout << list[i] << ' ';
	delete[]gp1;
	delete[]gp2;
	delete[]list;
	return 0;
}