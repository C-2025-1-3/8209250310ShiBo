#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe
	cout << "Output in unsigned int type:" << testUnint << endl;//<<oct
	cout << "Output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "Output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "Output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "Output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "Output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;//精度设置要放在类型转换前面
	cout << "Output in Hex unsigned int type:" << hex << testUnint << endl;//16进制输出system("pause")
	cout << "Output in Oct unsigned int type:" << oct << testUnint << endl;
	return 0;
}