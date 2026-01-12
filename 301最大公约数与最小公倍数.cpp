#include<iostream>
using namespace std;
int GCD(int x, int y) 
{
	int z;
	for (int i = 1; i <= x && i <= y; i++)
		if (x % i == 0 && y % i == 0)z = i;
	return z;
}
int Max(int x, int y)
{
	return x > y ? x : y;
}
int LCM(int x, int y)
{
	int z;
	for(int i=Max(x,y); ;i++)
		if (i % x == 0 && i % y == 0)
		{
			z = i;
			break;
		}
	return z;
}
int main()
{
	int m, n;
	cout << "请输入两个自然数：";
	cin >> m >> n;
	cout << "最大公约数：" << GCD(m, n) << endl;
	cout << "最小公倍数：" << LCM(m, n) << endl;
	return 0;
}