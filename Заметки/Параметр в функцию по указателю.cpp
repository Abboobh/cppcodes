#include<iostream>
#include<ctime>
using namespace std;

void Func(int* pvariable);

void main()
{
	setlocale(LC_ALL, "Rus");

	int number = 0;

	cout << number << endl;

	Func(&number);//�������� ������ �� ����������

	cout << number << endl;
}

void Func(int* pvariable)
{
	(*pvariable)++;
}