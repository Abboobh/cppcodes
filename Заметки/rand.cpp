#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int min = 100, max = 250;
	srand(time(NULL)); //��������� ����� ��� ������� rand()

	int a = rand(); //��������������� ��������� �����

	int b = min + rand() % ((max + 1) - min);; //��������� ����� � ���������

	cout << b << endl;
}
