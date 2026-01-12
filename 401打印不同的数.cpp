#include<iostream>
using namespace std;
int main()
{
	int a[10], b[10], carry = 10, No = 0;
	bool flag;
	cout << "Enter ten numbers: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		flag = true;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				carry--;
				flag = false;
				break;
			}
		}
		if (flag) 
		{
			b[No] = a[i];
			No++;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < carry; i++)
		cout << b[i] << ' ';
	return 0;
}