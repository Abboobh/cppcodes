#include<iostream>
#include<string>
using namespace std;

//����������� ��� �������� ������������ ������� ���������� �� ��������� �� �������������

class One
{
public:
	One()
	{
		cout << "�������� ����������� ������������� ������ One" << endl;
	}

	~One()
	{
		cout << "�������� ���������� ������������� ������ One" << endl;
	}
};

class Two : public One
{
public:
	Two()
	{
		cout << "�������� ����������� ������ Two" << endl;
	}

	~Two()
	{
		cout << "�������� ���������� ������ Two" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	//cout << "������� ���������� ������ One" << endl;
	//One one;
	//cout << endl;

	cout << "������� ���������� ������ Two" << endl;
	Two two;
	cout << endl;

	return 0;
}

