#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int number;
	cout << "Введите номер команды" << endl;
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "ты пидор" << endl;
		break;

	case 2:
		cout << "Сам пидор" << endl;
		break;

	default:
		cout << "Нет такой команды" << endl;
		break;
	}

}
