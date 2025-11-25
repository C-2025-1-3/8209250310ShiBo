#include<iostream>//未加#
using namespace std;
int main()//主函数main应小写
{
	int k;
	cin >> k;
	int i = k + 1;//未定义变量k
	cout << i++ << endl;
	i = 1;//重复定义
	cout << i++ << endl;
	cout << "Welcome to C++!" << endl;
	return 0;//未加上；
}