#include<iostream>
using namespace std;
int main()
{
	bool locker[100] = { 0 };
	for (int StudentNo = 1; StudentNo <= 100; StudentNo++)
		for (int LockerNo = StudentNo; LockerNo <= 100; LockerNo += StudentNo)
			locker[LockerNo - 1] = !locker[LockerNo - 1];
	cout << "最后储物柜状态：" << '\n';
	for (int i = 0; i < 100; i++)
	{
		cout << i + 1 << ':';
		if (locker[i])
			cout << "开" << '\n';
		else
			cout << "关" << '\n';
	}
	return 0;
}