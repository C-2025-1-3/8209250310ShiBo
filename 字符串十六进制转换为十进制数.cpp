#include<iostream>
#include<cstring>
using namespace std;
int FunHex(int n)
{
	int fina;
	if (n == 0)fina = 1;
	else fina = 16 * FunHex(n - 1);
	return fina;
}
int parseHex(const char* const hexString)
{
	int len = strlen(hexString), imp = 0;
	int* carry = new int[len];
	for (int i = 0; i < len; i++)
	{
		if (hexString[i] >= 'a' && hexString[i] <= 'z')carry[i] = hexString[i] - 'a' + 10;
		else if (hexString[i] >= 'A' && hexString[i] <= 'Z')carry[i] = hexString[i] - 'A' + 10;
		else if (hexString[i] >= '0' && hexString[i] <= '9')carry[i] = hexString[i] - '0';
	}
	for (int j = len-1; j >= 0; j--)
		imp += carry[j] * FunHex(len - j - 1);
	delete[]carry;
	return imp;
}
int main()
{
	const int Max_Len = 9;
	char hexString[Max_Len];
	cout << "请输入一个十六进制数：";
	cin >> hexString;
	cout << "结果：" << parseHex(hexString);
}