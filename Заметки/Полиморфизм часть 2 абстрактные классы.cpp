#include<iostream>
#include<string>
using namespace std;

class Weapon//����������� �����
{
public:
	virtual void Shoot() = 0;//�������� ��� ������� ����� �����������
	void Meth()//����� ����������� � ������� ������
	{
		cout << "Method" << endl;
	}
};

class Pistol : public Weapon
{
public:
	virtual void Shoot() override//����������� ����� ��� ��������������� � ������ ������, virtual ��� ����� ��� ��������� ����, ��� �� �������������� �����
	{
		cout << "BANG!" << endl;
	}
};
class SubmachineGun : public Pistol//��������� �� ����� �������
{
public:
	void Shoot() override//��� ������������ �� ��������������� �����
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

