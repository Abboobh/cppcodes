#include<iostream>
#include<ctime>
#include<string>
using namespace std;

//��� ��������(*��� ���������)(������������ ���������)

string GetDataFromBD()//������� ��� �������, ��� �������, �������� ������� ��� ��������� ���� ���� ������ ���� ����� �������� �� ���� Get
{
	return "Data From BD";
}

string GetDataFromWebServer()//������� ��� �������
{
	return "Data From WebServer";
}

void ShowInfo(string (*Func)())//� �������� ������������� �������� ����������� ��������� �� �������
{
	cout << Func() << endl;
}

void main()
{
	setlocale(LC_ALL, "RUS");

	ShowInfo(GetDataFromBD);//�������� ������� ShowInfo() � � �������� ������������� ��������� �������� ������ ��� �������
	ShowInfo(GetDataFromWebServer);
}
