#include<iostream>
#include<string>
#include<Class.h>
using namespace std;

//ћножественное наследование

class Car
{
public:
	Car()
	{
		Console.
	}

	void Drive()
	{
		cout << "я еду" << endl;
	}
};

class Airplain
{
public:
	Airplain()
	{

	}

	void Fly()
	{
		cout << "я лечу" << endl;
	}
};

class FlyingCar : public Car, public Airplain//Ќаследник с множественными родительскими классами
{

};

int  main()
{
	setlocale(LC_ALL, "Rus");

	FlyingCar fc;
	fc.Drive();
	fc.Fly();

	return 0;
}