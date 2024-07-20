#include<iostream>
#include<string>
using namespace std;

//Интерфейсы в С++

class IBycycle//Абстрактный метод с виртуальными методами
{
public:
	void virtual TwistTheWheel() = 0;//Метод виртуальный
	void virtual Ride() = 0;
};

class SimpleBicycle : public IBycycle
{
public:
	void TwistTheWheel() override//переопределяем метод
	{
		cout << "метод TwistTheWheel SimpleBicycle";
	}
	void Ride() override
	{
		cout << "метод Ride SimpleBicycle";
	}
};

class SportBicycle : public IBycycle
{
public:
	void TwistTheWheel() override//переопределяем метод
	{
		cout << "метод TwistTheWheel SportBicycle";
	}
	void Ride() override
	{
		cout << "метод Ride SportBicycle";
	}
};

class Human
{
public:
	void RideOn(IBycycle& bicycle)
	{
		cout << "Крутим руль" << endl;
		bicycle.TwistTheWheel();
		cout << "Поехали" << endl;
		bicycle.Ride();
	}
};

int  main()
{
	setlocale(LC_ALL, "Rus");

	SimpleBicycle simplebicycle;
	SportBicycle sportbicycle;

	Human human;
	human.RideOn(simplebicycle);
	human.RideOn(sportbicycle);


	return 0;
}