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

	static int GetCount()
	{
		return count;
	}

	static void ChangeColor(Apple& apple, string color)
	{
		apple.color = color;
	}

private:
	static int count;
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
	Apple::ChangeColor(apple, "Green");//�������� c���������� �����

	return 0;
}

