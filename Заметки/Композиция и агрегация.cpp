#include<iostream>
#include<string>
using namespace std;

//��������� � ����������
//���������� - ����� ��������� ����� �� ����� ������������ ��� �������� ������, ������� �������� ������ ������� � �������
//��������� - ����� ����� ����� �������������� � ������� ��������

class Cap
{
public:
	string GetColor()
	{
		return color;
	}
private:
	string color = "Red";
};
class Model
{
public:
	void InspectModel()
	{
		cout << "����� " << cap.GetColor() << "�����" << endl;
	}
private:
	Cap cap;
};
class Human
{
public:
	void Think()
	{
		brain.Think();
	}

	void InspectTheCap()
	{
		cout << "��� ����� " << cap.GetColor() << " �����" << endl;
	}

private:
	class Brain
	{
	public:
		void Think()
		{
			cout << "� �����" << endl;
		}
	};
	Brain brain;
	Cap cap;
};

int main()
{
	setlocale(LC_ALL, "rus");

	Human human;
	human.Think();
	human.InspectTheCap();
	Model model;
	model.InspectModel();


	return 0;
}

