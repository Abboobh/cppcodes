#include<iostream>
#include<string>
using namespace std;

class Pistol
{
public:
	virtual void Shoot()//����������� ����� ��� ��������������� � ������ ������, virtual ��� ����� ��� ��������� ����, ��� �� �������������� �����
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

	//Pistol* weapon = &berreta9mm;//��� ������, ����� ������� ��������� ��� ������ ������
	Pistol* weapon = &mp7;//� ����� � ���������� ����� ��������� ����� ��� ����� ���������

	weapon->Shoot();//����� ����� ��������� � ���� ������, ������� ������ � ��������� "weapon"

	Player player;
	player.Shoot(&berreta9mm);//������ �� ���� ���������� � ����� ������� ������ ����� ������, �� ������� ������. 
	player.Shoot(&mp7);


	return 0;
}

