#include<iostream>
using namespace std;
int main()
{
	cout << "Enter ten numbers:";
	bool changed = true;
	double list[10], carry;
	for (int i = 0; i < 10; i++)
			cin >> list[i];
	do
	{		
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				carry = list[j];
				list[j] = list[j + 1];
				list[j + 1] = carry;
				changed = true;
			}
	} 
	while (changed);
	cout << "The distinct numbers are:";
	for (int i = 0; i < 10; i++)
		cout << list[i] << ' ';
	return 0;
}