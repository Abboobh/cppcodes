#include<iostream>
#include<string>
using namespace std;

class Pistol
{
public:
	virtual void Shoot()//Виртуальный класс для переопределения в другом классе, virtual это слово для показания того, что мы переопределяем метод
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

class Player
{
public: 
	void Shoot(Pistol* gun)
	{
		gun->Shoot();
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	Pistol berreta9mm;
	SubmachineGun mp7;

	//Pistol* weapon = &berreta9mm;//Для памяти, можем сделать указатель для одного класса
	Pistol* weapon = &mp7;//в класс с указателем можем присвоить класс или класс наследник

	weapon->Shoot();//метод будет выделятся у того класса, который указан в указателе "weapon"

	Player player;
	player.Shoot(&berreta9mm);//Теперь мы моем передовать в метод другого класса любые классы, на примере оружия. 
	player.Shoot(&mp7);


	return 0;
}

