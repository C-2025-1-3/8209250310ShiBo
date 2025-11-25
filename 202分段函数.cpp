#include<iostream>
using namespace std;
int main()
{
	cout << "Please input a number";
	float x,y;
	cin >> x;
	if ((x > 0 && x < 10) == 1)
	{
		if (x < 1)
			y = 3 - 2 * x;
		else if (x < 5)
			y = static_cast<float>((int)1) / (2 * x) + 1;
		else
			y = x * x;
		cout << "The resource is " << y ;
	}
	else
	{
		cout << "invalid" ;
	}
	return 0;
}