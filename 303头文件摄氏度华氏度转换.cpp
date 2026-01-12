#include<iostream>
#include<iomanip>
#include"mytemperature.h"
//#include"mytemperature.cpp"
using namespace std;
int main()
{
	double cel, fah;
	cout << "Celsius " << "Fahrenhit" <<  '|' << '\t' << "Fahrenhit " << "Celsius" << endl;
	for (cel = 40.0, fah = 120.0; cel > 30.0 && fah >= 30.0; cel--, fah -= 10)
	{
		cout << fixed << setprecision(1) << cel << '\t';
		cout << fixed << setprecision(1) << celsius_to_fah(cel);
		cout << '\t' << '|' << '\t';
		cout << fixed << setprecision(1) << fah << '\t';
		cout << fixed << setprecision(2) << fah_to_celsius(fah) << endl;
	}
	return 0;
}