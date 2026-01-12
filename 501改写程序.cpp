#include<iostream>
using namespace std;
class Time             // 定义Time类
{
//public:              // 数据成员为公用的
//	int hour;
//	int minute;
//	int sec;           //修改之前

/*修改之后*/

private:
	int hour;
	int minute;
	int sec;
public:
	void SetTime(int hour = 0, int minute = 0, int sec = 0)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void ShowTime()
	{
		cout << hour << ':' << minute << ':' << sec << endl;
	}
};
int main()
{
	Time tl;           //定义t1为Time类对象
	//cin >> tl.hour;      //输入设定的时间 
	//cin >> tl.minute;
	//cin >> tl.sec;
	//cout << tl.hour << ':' << tl.minute << ':' << tl.sec << endl;             //修改之前
	int hour, minute, second;
	cin >> hour >> minute >> second;
	tl.SetTime(hour, minute, second);
	tl.ShowTime();
	return 0;
}