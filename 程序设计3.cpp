#include<iostream>
using namespace std;
void swap(int list[],int size)
{
	int carry;
	for (int i = 0; i < size - 1; i++)
		for (int j = i; j < size - 1; j++)
			if (list[j] > list[j + 1])
			{
				carry = list[j];
				list[j] = list[j + 1];
				list[j + 1] = carry;
			}
}
int main()
{
	int size;
	cout << "Enter a list:";
	cin >> size;
	int* ip = new int[size];
	for (int i = 0; i < size; i++)
		cin >> ip[i];
	swap(ip, size);
	cout << "The distinct list:" << endl;
	for (int j = 0; j < size; j++)
		cout << ip[j] << ' ';
	delete[]ip;
	return 0;
}