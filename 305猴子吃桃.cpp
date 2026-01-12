#include<iostream>
using namespace std;
int eat(int x,int day)
{
	if (day == 1)
		return x;
	else
		return eat((x + 1) * 2, day - 1);
}
int main()
{
	cout << eat(1,10) << endl;
	return 0;
}