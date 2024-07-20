#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class Person//Имя класса
{
	//Тело класса
public: string firstName = "None";
public: string secondName = "None";
private: int age = 0;

public: void SetAge(int variable) //Инкапсуляция пример. Нет прямого доступа к переменной agr
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

	Person firstPerson;//Объявляем экземпляр класса
	firstPerson.firstName = "Vladimir";//Присваеваем свойство класса
	firstPerson.secondName = "Utkin";
	firstPerson.SetAge(27);//с помощью метода класса присваиваем в приватную переменную значение

	cout << firstPerson.GetAge() << endl;

	return 0;
}
