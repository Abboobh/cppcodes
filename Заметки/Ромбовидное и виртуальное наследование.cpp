#include<iostream>
#include<string>
using namespace std;

//����������� � ����������� ������������

class Component
{
public:
	Component(string companyName)
	{
		cout << "����������� Component" << endl;
		this->companyName = companyName;
	}
	string companyName;
};
class GPU : public Component
{
public:
	GPU(string companyName) :Component(companyName)
	{
		cout << "����������� GPU" << endl;
	}
};
class Memory : public Component
{
public:
	Memory(string companyName) :Component(companyName)
	{
		cout << "����������� Memory" << endl;
	}
};
class GraphicCard : public GPU, public Memory//����������� ������������
{
public:
	GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
	{
		cout << "����������� GraphicCard" << endl;
	}
};

class Character
{
public:
	int HP;
};
class Orc : public virtual Character//����������� �� ������ ���������� ������������� ������
{

};
class Warrior : public virtual Character//����������� �� ������ ���������� ������������� ������
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