#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class Person//��� ������
{
	//���� ������
public: string firstName = "None";
public: string secondName = "None";
private: int age = 0;

public: void SetAge(int variable) //������������ ������. ��� ������� ������� � ���������� agr
{
	age = variable;
}

public: int GetAge()
{
	return age;
}
};

int main()
{
	setlocale(LC_ALL, "rus");

	Person firstPerson;//��������� ��������� ������
	firstPerson.firstName = "Vladimir";//����������� �������� ������
	firstPerson.secondName = "Utkin";
	firstPerson.SetAge(27);//� ������� ������ ������ ����������� � ��������� ���������� ��������

	cout << firstPerson.GetAge() << endl;

	return 0;
}
