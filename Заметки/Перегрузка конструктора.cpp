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

	Point(int valueX, int valueY)//конструктор класса, если нужен доступ, вставить в секцию public
	{
		x = valueX;
		y = valueY;
	}

	Point()//конструктор с параметрами по умолчанию
	{
		x = 0;
		y = 0;
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

	Point a;//создание экземпляра класса с конструктором по умолчанию
	a.Print();

	Point b(2, 4);//конструктор с указанием параметров для конструктора
	b.Print();

	return 0;
}