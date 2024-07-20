#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point(int valueX, int valueY)//����������� ������, ���� ����� ������, �������� � ������ public
	{
		x = valueX;
		y = valueY;
	}

	void Print()
	{
		cout << "x = [" << x << "]\t" << "y = [" << y << "]" << endl;
	}

	void SetX(int value)
	{
		x = value;
	}
	void SetY(int value)
	{
		y = value;
	}

	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Point a(1, 1);

	a.Print();

	return 0;
}