#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
using namespace std;

int  main()
{
	setlocale(LC_ALL, "Rus");
	string path = "res/Config.cfg";//������ ���� � �����

	ifstream file_in;
	file_in.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		cout << "������� ������� ����" << endl;
		file_in.open(path);
		cout << "���� ������� ������" << endl;
	}
	catch (const exception& ex)//� �������� ��������� ����� �������� ifstream::failure
	{
		cout << ex.what() << endl;
		cout << "������ �������� �����!" << endl;
	}
	
	return 0;
}