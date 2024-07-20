#include<iostream>
#include<string>
using namespace std;

class Human
{
public:

	Human(string Name)
	{
		this->Name = Name;
		this->Age = 0;
		this->Weight = 0;
	}

	Human(string Name, int Age):Human(Name)//Делегация конструктора
	{
		this->Age = Age;
	}

	Human(string Name, int Age, int Weight):Human(Name, Age)//"Продвинутая" делекация конструктора
	{
		this->Weight = Weight;
	}

	string Name;
	int Age;
	int Weight;
};

int main()
{
	setlocale(LC_ALL, "rus");

	Human first_person("Вовчик");//Можно так
	Human second_person("Женечек", 28);//А можно так



	return 0;
}

