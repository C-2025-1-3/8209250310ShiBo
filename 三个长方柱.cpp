#include<iostream>
using namespace std;
class Column
{
private:
	int length, width, height;
public:
	Column()
	{
		length = 0;
		width = 0;
		height = 0;
	}
	Column(int length,int width,int height)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}
	int Volume()
	{
		return length * width * height;
	}
};
int main()
{
	int length[3], width[3], height[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "请输入第" << i + 1 << "个长方柱的长宽高：";
		cin >> length[i] >> width[i] >> height[i];
	}
	Column Re[3];
	cout << "这三个长方柱的体积分别是：";
	for (int i = 0; i < 3; i++)
	{
		Re[i] = Column{ length[i],width[i],height[i] };
		cout << Re[i].Volume() << ' ';
	}
	return 0;
}