#include<iostream>
#include<ctime>
#include<string>
#define DEBUG //���� ��������������� �� ifdef �� ����� ��������
#define DEBUG_1 4

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

#ifdef DEBUG
	cout << "������ �����" << endl;
#endif // DEBUG


	for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}

#ifdef DEBUG //ifndef ���� � ����������))
	cout << "����� �����" << endl;
#else //elif - ��������� else if
	cout << "����� �� ���������" << endl;
#endif // DEBUG

#if 0

#endif // 0

}