#include<iostream>
#include<string>
using namespace std;

//������������ �������

class Human
{
public:
	void SetName(string name)
	{
		this->name = name;
	}
private:
	string name;
};

class Student : public Human//�������������
{
public:
	string group;
	void Learn()
	{
		cout << "� �����" << endl;
	}
};

class ExtramuralStedent : public Student
{
public:
	void Learn()
	{
		cout << "� ����� ������" << endl;
	}
};

class Professor : public Human
{
public:
	string subject;
};



int main()
{
	setlocale(LC_ALL, "rus");

	Student st;
	st.Learn();

	ExtramuralStedent exraSt;
	exraSt.Learn();

	return 0;
}

