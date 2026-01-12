#include<iostream>
using namespace std;
class Student
{
private:
	int num, score;
public:
	Student(int num = 0, int score = 0)
	{
		this->num = num;
		this->score = score;
	}
	static void max(Student s[], int size, Student*& Best)
	{
		Best = &s[0];
		for (int i = 0; i < size; i++)
			if (Best->score < s[i].score)
				Best = &s[i];
	}
	int GetNum()
	{
		return num;
	}
};
int main()
{
	int num[5], score[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "输入第" << i + 1 << "个学生的学号与成绩:";
		cin >> num[i] >> score[i];
	}
	Student s[5];
	Student* best = nullptr;
	for (int j = 0; j < 5; j++)
		s[j] = Student{ num[j],score[j] };
	Student::max(s, 5, best);
	cout << "成绩最好的同学是：";
	cout << best->GetNum();
}