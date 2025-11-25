#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float C, F;
	cout << "Please input the temperature in Fahrenheit degree";
	cin >> F;
	C = (F - 32) / 1.8;
	cout << "The Celsius degree is" << setprecision(4) << C << endl;
	return 0;
}