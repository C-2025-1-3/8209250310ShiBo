#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}
int main()
{
	for (int num = 2,i=1; ; num++)
	{
		if (is_prime(num) && i <= 200&&i%10!=0)
		{
			cout << num << '\t';
			i++;
		}
		else if (is_prime(num) && i <= 200 && i % 10 == 0)
		{
			cout << num << '\n';
			i++;
		}
	}
	return 0;
}