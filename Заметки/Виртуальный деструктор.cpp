#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	A()
	{
		cout << "Выделена память класс А" << endl;
	}

	virtual ~A()//виртуальный деструктор
	{
		cout << "Освобождена память класс A" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "Выделена память класс B" << endl;
	}

	~B() override//указываем компилятору, что мы переопределили деструктор для класса наследника 
	{
		cout << "Освобождена память класс В" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	A* bptr = new  B;//указатель базового класса на ссылку класса наследника
	delete bptr;

	return 0;
}

