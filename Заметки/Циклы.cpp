#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int number = 0, number_2 = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "���������� �������� For: \t[" << i + 1 << "]" << endl;
	}

	cout << endl;

	while (number < 5)
	{
		cout << "���������� �������� While: \t[" << number + 1 << "]" << endl;
		number++;
	}

	cout << endl;

	do //��������� ���� �� �������� ������� while
	{
		cout << "���������� �������� Do While: \t[" << number_2 + 1 << "]" << endl;
		number_2++;
	} while (number_2 < 5);

}