#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int* pvariable = new int;//������ �������� ������������ ������ ��� ����� ���������
	cout << "������ ������:\t\t[" << pvariable << "]" << endl;
	*pvariable = 10;//����������� ��������� � ���������� ��� ��� ������
	cout << "�������� � ������:\t[" << *pvariable << "]" << endl;

	delete pvariable;//������� ���������� �����, ��� �����������, ��� �� �� ���� ������ ������
	
}

