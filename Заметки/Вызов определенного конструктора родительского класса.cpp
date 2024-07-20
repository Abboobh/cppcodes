#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		msg = "ѕустое сообщение";
	}

	A(string msg)
	{
		this->msg = msg;
	}

	void PrintMsg()
	{
		cout << msg << endl;
	}

private:
	string msg;
};

class B : public A
{
public:
	B():A("Ќаше новое сообщение")//вызвали конструктор родительского класса с передачей в него параметра
	{
		
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	B value;
	value.PrintMsg();

	return 0;
}

