#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int  main()
{
	setlocale(LC_ALL, "Rus");

	string path = "res/Config.cfg";//������ ���� � �����
	ofstream file;//������� ������ ������ ��� ������ � ����
	file.open(path, ofstream::app);//��������� ���� ��� �������, ���� ��� �� ����, � ��������� �������� ���������� � ������,

	if (!file.is_open())//���������, �������� �� ����
	{
		cout << "�� ������� ������� ����" << endl;
	}
	else 
	{
		file << "File for data";//��������� ������ � ����
	}

	file.close();//������� ����

	return 0;
}