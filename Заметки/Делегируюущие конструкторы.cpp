#include<iostream>
#include<string>
using namespace std;

class Human
{
public:

	Human(string Name)
	{
		this->Name = Name;
		this->Age = 0;
		this->Weight = 0;
	}

	Human(string Name, int Age):Human(Name)//��������� ������������
	{
		this->Age = Age;
	}

	Human(string Name, int Age, int Weight):Human(Name, Age)//"�����������" ��������� ������������
	{
		this->Weight = Weight;
	}

	string Name;
	int Age;
	int Weight;
};

int main()
{
	setlocale(LC_ALL, "rus");

	Human first_person("������");//����� ���
	Human second_person("�������", 28);//� ����� ���



	return 0;
}

