#include<iostream>
using namespace std;
int main()
{
	cout << "Please iuput a letter:";
	char x;
	cin >> x;
	switch (x < 96)
	{
	case 0:
		cout << static_cast<char>(x -32);
		break;
	case 1:
		cout << static_cast<int>(x);
		break;
	}
	return 0;
}