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
	
	~Car()
	{
		cout << "������ ���������� Car" << endl;
	}

	void Use()
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

	~Airplain()
	{
		cout << "������ ���������� Airplain" << endl;
	}

	void Use()
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

	~FlyingCar()
	{
		cout << "������ ���������� FlyingCar" << endl;
	}
};

int  main()
{
	setlocale(LC_ALL, "Rus");

	FlyingCar fc;
	((Car)fc).Use();//���������� ������� fc � ���� car � ����� ������� �� ������������

	return 0;
}