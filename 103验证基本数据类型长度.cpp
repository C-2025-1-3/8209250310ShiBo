#include<iostream>
using namespace std;
int main()
{
	cout << "bool length:" << sizeof(bool)<<'\n';
	cout << "char length:" << sizeof(char)<<'\n';
	cout << "unsigned char length:" << sizeof(unsigned char)<<'\n';
	cout << "wchar_t length:" << sizeof(wchar_t)<<'\n';
	cout << "int length:" << sizeof(int)<<'\n';
	cout << "signed length:" << sizeof(signed)<<'\n';
	cout << "unsigned length:" << sizeof(unsigned)<<'\n';
	cout << "short length:" << sizeof(short)<<'\n';
	cout << "long length:" << sizeof(long)<<'\n';
	cout << "unsigned short length:" << sizeof(unsigned short)<<'\n';
	cout << "unsigned long length:" << sizeof(unsigned long)<<'\n';
	cout << "float length:" << sizeof(float)<<'\n';
	cout << "double length:" << sizeof(double)<<'\n';
	cout << "long double length:" << sizeof(long double)<<endl;
	return 0;
}