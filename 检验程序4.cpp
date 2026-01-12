#include<iostream>
using namespace std;
int* f()
{
	//int list[] = { 1,2,3,4 };
	int* lp = new int[4];
	int list[] = { 1,2,3,4 };
	for (int i = 0; i < 4; i++)
		lp[i] = list[i];
	return lp;
}
int main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
	p = NULL;
}