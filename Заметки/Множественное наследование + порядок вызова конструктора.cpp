#include<iostream>
#include<string>
using namespace std;

//Множественное наследование

class Car
{
public:
	Car()
	{
		cout << "Вызван конструктор Car" << endl;
	}
	void Drive()
	{
		cout << "Я еду" << endl;
	}
};

class Airplain
{
public:
	Airplain()
	{
		cout << "Вызван конструктор Airplain" << endl;
	}
	void Fly()
	{
		cout << "Я лечу" << endl;
	}
};

class FlyingCar : public Car, public Airplain//Наследник с множественными родительскими классами
{
public:
	FlyingCar()
	{
		cout << "Вызван конструктор FlyingCar" << endl;
	}
};

int  main()
{
	setlocale(LC_ALL, "Rus");

	FlyingCar fc;

	return 0;
}