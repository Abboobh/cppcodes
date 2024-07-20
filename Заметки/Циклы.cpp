#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int number = 0, number_2 = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Количество итераций For: \t[" << i + 1 << "]" << endl;
	}

	cout << endl;

	while (number < 5)
	{
		cout << "Количество итераций While: \t[" << number + 1 << "]" << endl;
		number++;
	}

	cout << endl;

	do //выполняет цикл до проверки условия while
	{
		cout << "Количество итераций Do While: \t[" << number_2 + 1 << "]" << endl;
		number_2++;
	} while (number_2 < 5);

}