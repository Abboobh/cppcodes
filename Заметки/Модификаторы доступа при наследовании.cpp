#include<iostream>
#include<string>
using namespace std;

//Модификаторы доступа рпи наследовании

class One
{
public:
	string msgOne = "One";//Доступно всем и везде
private:
	string msgTwo = "Two";//Закрыто ото всех, кроме класса где создана
protected:
	string msgThree = "Three";//Доступно только наследникам
};

class Two : public One
{
public:
	void Message()
	{
		cout << msgThree << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	Two two;
	two.Message();

	return 0;
}

