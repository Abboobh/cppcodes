#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL)); //��������� ����� ��� ������� rand()

	int size = 0;//��������� ���������� � ���������� ������� �������
	
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << endl;
	cout << "������\t��������\t������" << endl;

	int* array = new int[size];//�������� ����� � ������ ��� ������������� �������

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)//���������� ������
	{
		cout << "[" << i << "]" << "\t";
		cout << "[" << array[i] << "]" << "\t\t";//������� �������� ������� �� ������
		cout << "[" << array + i << "]" << endl;//������� ������� � ������ �������. ����� ���������� ����������
		//�����������, ���� ����������� ������ ��� ��� *(array + i)
	}

	delete[] array;//������� ������������ ������ � ������
}