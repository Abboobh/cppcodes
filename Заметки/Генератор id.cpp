#include<iostream>
#include<string>
using namespace std;

class Apple;//����������� ������� ��� ��������� �������
class Human;

class Human
{
public:
	void TakeApple(Apple& apple);

	void EatApple(Apple& apple)
	{

	}
};
class Apple
{
public:
	static int count;//��������� ���������� ��������� ��� ���� �����������

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		count++;
		id = count;
	}

	int GetID()
	{
		return id;
	}

private:
	int weight;
	string color;
	int id;
};

int Apple::count = 0;//������������� ��������� ����������

void Human::TakeApple(Apple& apple)
{
}

int main()
{
	setlocale(LC_ALL, "rus");

	Apple apple(150, "Red");

	cout << Apple::count << endl;

	return 0;
}

