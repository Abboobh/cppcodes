#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int size_x = 0, size_y = 0;

	cout << "������� ���������� �����" << endl;
	cin >> size_x;
	cout << "������� ���������� ��������" << endl;
	cin >> size_y;
	cout << endl;

	int** array = new int* [size_x];//������� ������ ����������

	for (int i = 0; i < size_x; i++)
	{
		array[i] = new int[size_y];//� ������ ������� ������� ����������, ������� ��������� �� ������
	}

	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++) 
		{
			array[i][j] = rand() % 20;//���������� � ��������� ���������� �������
		}
	}

	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++)
		{
			cout << "[" << array[i][j] << "]" << "\t";//������� ������������ ������
		}
		cout << endl;
	}

	for (int i = 0; i < size_x; i++)
	{
		delete[] array[i];//������� ��������� � ������ ������
	}

	delete[] array;
}