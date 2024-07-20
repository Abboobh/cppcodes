#include<iostream>
#include<string>
using namespace std;

//Наследование классов

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

class Student : public Human//унаследование
{
public:
	string group;
	void Learn()
	{
		cout << "Я учусь" << endl;
	}
};

class ExtramuralStedent : public Student
{
public:
	void Learn()
	{
		cout << "Я учусь иногда" << endl;
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

