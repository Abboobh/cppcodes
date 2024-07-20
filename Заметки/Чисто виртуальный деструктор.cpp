#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		cout << "¬ыделена пам€ть класс ј" << endl;
	}

	virtual ~A() = 0;//виртуальный чисто деструктор
};

A::~A() {};//об€зательно нужно указывать деструктор вне класса что бы создавать базовый класс с указателем на класс наследника

class B : public A
{
public:
	B()
	{
		cout << "¬ыделена пам€ть класс B" << endl;
	}

	~B() override//указываем компил€тору, что мы переопределили деструктор дл€ класса наследника 
	{
		cout << "ќсвобождена пам€ть класс ¬" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	A* bptr = new B;//указатель базового класса на ссылку класса наследника
	delete bptr;

	return 0;
}

