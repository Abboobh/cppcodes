	int a = 5;//���������� ���������� � ������

	int *pa = &a;//��������� �� ���������� "�" ����� * ����� ������� ����� ��������

	cout << px << endl;//����������� ������ �� ������ ������

	cout << *px << endl;//��������� � ����� ����������

#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int var = 5;//���������� ���������� � ������
	int* px = &var;//��������� �� ���������� "var"
	int* px2 = &var;

	cout << "var\t" << var << endl;
	cout << "px\t" << px << endl;
	cout << "px2\t" << px2 << endl;

	*px2 = 2;

	cout << "var\t" << var << endl;
}

void main()
{
	setlocale(LC_ALL, "Rus");

	const int SIZE = 5;
	int array[SIZE]{ 3,54,7,23,7 };

	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << endl;
	}
	cout << "==========================" << endl;
	int* pArray = array;//��������� �� ������ // array=pArray

	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArray + i) << endl;//"*" - �������� �������������
	}
}

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int var = 5;

	int* pvar = &var;//���������
	int& varRef = var;//������ 

	//��� ��������� �� ������� � ����������� ������
	//� ������� ��� ���������� ����������, � � ���������� ��� �� ������� ����)))
} 