#include<iostream>
#include<string>
using namespace std;

//������������� ������������

class Car
{
public:
	Car()
	{
		cout << "������ ����������� Car" << endl;
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
		cout << "������ ����������� Airplain" << endl;
	}
	void Fly()
	{
		cout << "� ����" << endl;
	}
};

class FlyingCar : public Car, public Airplain//��������� � �������������� ������������� ��������
{
public:
	FlyingCar()
	{
		cout << "������ ����������� FlyingCar" << endl;
	}
};

int  main()
{
	setlocale(LC_ALL, "Rus");

	FlyingCar fc;

	return 0;
}