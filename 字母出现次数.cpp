#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	char c1, c2;
	for (int i = 0; s[i] != '\0'; i++)
	{
		c1 = 'a', c2 = 'A';
		for (int j = 0; j < 26; j++, c1++, c2++)
			if (s[i] == c1 || s[i] == c2)
				counts[j]++;
	}
}
int main()
{
	const int Max_len = 80;
	char s[Max_len], c = 'a';
	int counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(s, 999);
	count(s, counts);
	for (int j = 0; j < 26; j++ , c++)
		if (counts[j] != 0)
			cout << c << ':' << counts[j] << ' ' << "times" << '\n';
}