#include<iostream>
#include<string>
using namespace std;

//Виртуальное и ромбовидное наследование

class Component
{
public:
	Component(string companyName)
	{
		cout << "Конструктор Component" << endl;
		this->companyName = companyName;
	}
	string companyName;
};
class GPU : public Component
{
public:
	GPU(string companyName) :Component(companyName)
	{
		cout << "Конструктор GPU" << endl;
	}
};
class Memory : public Component
{
public:
	Memory(string companyName) :Component(companyName)
	{
		cout << "Конструктор Memory" << endl;
	}
};
class GraphicCard : public GPU, public Memory//ромбовидное наследоваине
{
public:
	GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
	{
		cout << "Конструктор GraphicCard" << endl;
	}
};

class Character
{
public:
	int HP;
};
class Orc : public virtual Character//наследуется от одного экземпляря родительского класса
{

};
class Warrior : public virtual Character//наследуется от одного экземпляря родительского класса
{

};
class OrcWarrior : public Orc, public Warrior
{

};

int  main()
{
	setlocale(LC_ALL, "Rus");
	
	GraphicCard graphiccard("AMD", "Samsung");

	return 0;
}