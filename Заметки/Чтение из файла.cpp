#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int  main()
{
	setlocale(LC_ALL, "Rus");

	string path = "res/Config.cfg";//������ ���� � �����

	//ofstream file;//������� ������ ������ ��� ������ � ����
	//file.open(path, ofstream::app);//��������� ���� ��� �������, ���� ��� �� ����, � ��������� �������� ���������� � ������,
	//if (!file.is_open())//���������, �������� �� ����
	//{
	//	cout << "�� ������� ������� ����" << endl;
	//}
	//else 
	//{
	//	file << "File for data";//��������� ������ � ����
	//}
	//file.close();//������� ����

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "�� ������� ������� ����" << endl;
	}
	else
	{
		cout << "���� �����n" << endl;
		char ch;
		string str;
		//while (fin.get(ch))//���������� �����������
		//{
		//	cout << ch;
		//}

		//while (!fin.eof())//��������� ���� �� �����
		//{
		//	str = "";//�������� ������ ��������
		//	fin >> str;
		//	cout << str << endl;
		//}

		while (!fin.eof())//��������� ���� �� �����
		{
			str = "";//�������� ������ ��������
			getline(fin, str);//��������� ���������
			cout << str << endl;
		}
	}

	fin.close();

	return 0;
}