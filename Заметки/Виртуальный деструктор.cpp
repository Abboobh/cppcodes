#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		cout << "�������� ������ ����� �" << endl;
	}

	virtual ~A()//����������� ����������
	{
		cout << "����������� ������ ����� A" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "�������� ������ ����� B" << endl;
	}

	~B() override//��������� �����������, ��� �� �������������� ���������� ��� ������ ���������� 
	{
		cout << "����������� ������ ����� �" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	A* bptr = new  B;//��������� �������� ������ �� ������ ������ ����������
	delete bptr;

	return 0;
}

