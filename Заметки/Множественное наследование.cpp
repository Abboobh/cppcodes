#include<iostream>
#include<string>
#include<Class.h>
using namespace std;

//������������� ������������

class Car
{
public:
	Car()
	{
		Console.
	}

	void Drive()
	{
		cout << "� ���" << endl;
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
		cout << "� ����" << endl;
	}
};

class FlyingCar : public Car, public Airplain//��������� � �������������� ������������� ��������
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