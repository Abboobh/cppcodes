#include<iostream>
#include<string>
using namespace std;

class Weapon//абстрактный класс
{
public:
	virtual void Shoot() = 0;//Сообщаем что функция чисто виртуальная
	void Meth()//Можем реализовать и обычные методы
	{
		cout << "Method" << endl;
	}
};

class Pistol : public Weapon
{
public:
	virtual void Shoot() override//Виртуальный класс для переопределения в другом классе, virtual это слово для показания того, что мы переопределяем метод
	{
		cout << "BANG!" << endl;
	}
};
class SubmachineGun : public Pistol//Наследуем от класа пистоль
{
public:
	void Shoot() override//При наследовании мы попреопределяем метод
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};
class Knife : Weapon
{
public:
	void Shoot() override
	{
		cout << "VJUH" << endl;
	}
};
class Player
{
public: 
	void Shoot(Weapon* weapon)
	{
		weapon->Shoot();
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	Pistol berreta9mm;
	SubmachineGun mp7;
	Player player;
	player.Shoot(mp7);

	return 0;
}

