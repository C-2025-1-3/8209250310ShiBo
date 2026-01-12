#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void SetPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << ',' << y << ")";
	}
};
int main()
{
	int i, j;
	Point p;
	cout << "Before changing:";
	p.display();
	cout << '\n' << "Enter two numbers:";
	cin >> i >> j;
	p.SetPoint(i, j);
	cout << "After changing:";
	p.display();
	return 0;
}