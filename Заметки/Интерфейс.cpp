#include<iostream>
#include<string>
using namespace std;

//���������� � �++

class IBycycle//����������� ����� � ������������ ��������
{
public:
	void virtual TwistTheWheel() = 0;//����� �����������
	void virtual Ride() = 0;
};

class SimpleBicycle : public IBycycle
{
public:
	void TwistTheWheel() override//�������������� �����
	{
		cout << "����� TwistTheWheel SimpleBicycle";
	}
	void Ride() override
	{
		cout << "����� Ride SimpleBicycle";
	}
};

class SportBicycle : public IBycycle
{
public:
	void TwistTheWheel() override//�������������� �����
	{
		cout << "����� TwistTheWheel SportBicycle";
	}
	void Ride() override
	{
		cout << "����� Ride SportBicycle";
	}
};

class Human
{
public:
	void RideOn(IBycycle& bicycle)
	{
		cout << "������ ����" << endl;
		bicycle.TwistTheWheel();
		cout << "�������" << endl;
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