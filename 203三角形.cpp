#include<iostream>
using namespace std;
float max(float, float, float);
float mid(float, float, float);
float min(float, float, float);
int main()
{
	cout << "Please input the length of three sides of a triangle";
	float i, j, k;
	cin >> i >> j >> k;
	if (min(i, j, k) + mid(i, j, k) > max(i, j, k))
	{
		float C = i + j + k;
		cout << "The circumfference of the triangle is " << C << '\n';
		if ((i == j || i == k || j == k) == 1)
			cout << "The traingle is an isosceles traingle "<<endl;
		else
			cout << "Tne traingle isn't an isosceles traingle"<<endl;
	}
	else cout << "The traingle is invalid" << endl;
	return 0;
}
float max(float x, float y, float z)
{
	float m;
	if ((x > y && x > z) == 1)
		m = x;
	else if ((y > x && y > z) == 1)
		m = y;
	else
		m = z;
	return m;
}
float mid(float x, float y, float z)
{
	float m;
	if ((x > y && x < z) == 1)
		m = x;
	else if ((y > x && y < z) == 1)
		m = y;
	else
		m = z;
	return m;
}
float min(float x, float y, float z)
{
	float m;
	if ((x < y && x < z) == 1)
		m = x;
	else if ((y < x && y < z) == 1)
		m = y;
	else
		m = z;
	return m;
}