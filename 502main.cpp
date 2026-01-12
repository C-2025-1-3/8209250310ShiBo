#include <iostream>             //将类声明头文件包含进来
#include "502student.h"
using namespace std;
int main()
{
	Student stud;                //定义对象
	int num;
	char name[20];
	char sex;
	cin >> num >> name >> sex;
	stud.set_value(num, name, sex);
	stud.display();              //执行stud对象的display函数
	return 0;
}