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
	
	~Car()
	{
		cout << "Вызван деструктор Car" << endl;
	}

	void Use()
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

	~Airplain()
	{
		cout << "Вызван деструктор Airplain" << endl;
	}

	void Use()
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

	~FlyingCar()
	{
		cout << "Вызван деструктор FlyingCar" << endl;
	}
};

int  main()
{
	setlocale(LC_ALL, "Rus");

	FlyingCar fc;
	((Car)fc).Use();//приведение объекта fc к типу car и вызов функции от наследования

	return 0;
}