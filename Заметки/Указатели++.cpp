#include<iostream>
#include<ctime>
using namespace std;

//���� ������ ������������

void Func(int variable);//��������� ������ ����������
void Func2(int* variable);//���������, ��� ��� ���������
void Func3(int& variable);//���������, ��� ��� ������

void main()
{
	int value = 5;
	cout << "value =" << value << endl << endl;

	cout << "Function 1:" << endl;
	Func(value);//���������� ���������� � �������
	cout << "value = " << value << endl << endl;

	cout << "Function 2:" << endl;
	Func2(&value);//���������� ���������� � ������� �� ������, ��������� "&" - �������� ������ � ������
	cout << "value = " << value << endl << endl;

	cout << "Function 3:" << endl;
	Func3(value);//���������� ���������� � ������� �� ������, ���. ���������� �� ���������
	cout << "value = " << value << endl << endl;
}

void Func(int variable)//�������� ���������� � �������
{
	variable = 1;//���������� �������� ������ �������
}

void Func2(int* variable)//�������� ���������� �� ���������. ����������� ��������� �������� �������������
{
	*variable = 2;//��������� �������� �� ��������� � ���������� �������������
}

void Func3(int& variable)//�������� ���������� �� ������
{
	variable = 3;//��������� �������� �� ������. �������� ������������� �� �����
}