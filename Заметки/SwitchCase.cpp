#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int number;
	cout << "������� ����� �������" << endl;
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "�� �����" << endl;
		break;

	case 2:
		cout << "��� �����" << endl;
		break;

	default:
		cout << "��� ����� �������" << endl;
		break;
	}

}
