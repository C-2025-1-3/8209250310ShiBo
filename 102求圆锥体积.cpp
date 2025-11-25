#include<iostream>
#define PI    3.14
using namespace std;
int main()
{
	float r, h, V;
	cout << "Please input the radius and height of the cone";
	cin >> r >> h;
	V = PI * r * r * h / 3;
	cout << "Volume of the cone is" << V << endl;
	return 0;
}