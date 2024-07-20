#include<iostream>
#include<string>
using namespace std;

//Вызов метода базового класса

class Msg
{
public:
	Msg(string msg)
	{
		this->msg = msg;
	}

	virtual string GetMsg()
	{
		return msg;
	}
private:
	string msg;
};

class Printer
{
public:
	void Print(Msg* msg)
	{
		cout << msg->GetMsg() << endl;
	}
};

class BraketMsg : public Msg
{
public:
	BraketMsg(string msg) :Msg(msg)
	{

	}
	string GetMsg() override
	{
		return "[" + :: Msg :: GetMsg() + "]";//вызываем виртуальный метод базового класса
	}
};

int  main()
{
	setlocale(LC_ALL, "Rus");

	BraketMsg m("Привет");
	Printer p;
	p.Print(&m);

	return 0;
}