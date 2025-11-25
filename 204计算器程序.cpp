#include<iostream>
using namespace std;
int main()
{
	cout << "Please enter the formula:";
	float x, z, i;
	char y;
	cin >> x >> y >> z;
	switch (static_cast<int>(y))
	{
	case 43://¼Ó
	{
		i = x + z;
		cout << "The resource is " << i << endl;
		break;
	}
	case 45://¼õ
	{
		i = x - z;
		cout << "The resource is " << i << endl;
		break;
	}
	case 42://³Ë
	{
		i = x * z;
		cout << "The resource is " << i << endl;
		break;
	}
	case 47://³ý
	{
		if (z == 0)
			cout << "Not defined!" << endl;
		else
		{
			i = x / z;
			cout << "The resource is " << i << endl;
		}
		break;
	}
	case 37://È¡Óà
	{
		if ((static_cast<int>(x) == x && static_cast<int>(z) == z) == 1)
		{
			i = static_cast<int>(x) % static_cast<int>(z);
			cout << "The resource is " << i << endl;
		}
		else
			cout << "Not defined!" << endl;
		break;
	}
	default:
		cout << "Not defined!" << endl;
	}
	return 0;
}