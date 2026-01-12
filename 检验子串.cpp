#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1), len2 = strlen(s2);
	for (int i = 0; i < len2 - len1; i++)
	{
		bool isMatch = true;
			for (int j = 0; j < len1; j++)
				if (s1[j] != s2[i + j])
				{
					isMatch = false;
					break;
				}
		if (isMatch)
			return i;
	}
	return -1;
}
int main()
{
	const int Max_Len = 80;
	char s1[Max_Len], s2[Max_Len];
	cout << "Enter the first string:";
	cin.getline(s1,999);
	cout << "Enter the second string:";
	cin.getline(s2,999);
	cout << "indexOf(" << s1 << ',' << s2 << ")is" << ' ' << indexOf(s1, s2);
	return 0;
}