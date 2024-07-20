#include<iostream>
#include<string>
using namespace std;

//Деструкторы при удаления наследованых классов вызываются от дочернего до родительского

class One
{
public:
	One()
	{
		cout << "Вызвался конструктор родительского класса One" << endl;
	}

	~One()
	{
		cout << "Вызвался деструктор родительского класса One" << endl;
	}
};

class Two : public One
{
public:
	Two()
	{
		cout << "Вызвался конструктор класса Two" << endl;
	}

	~Two()
	{
		cout << "Вызвался деструктор класса Two" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	//cout << "Создаем эксземпдяр класса One" << endl;
	//One one;
	//cout << endl;

	cout << "Создаем эксземпдяр класса Two" << endl;
	Two two;
	cout << endl;

	return 0;
}

