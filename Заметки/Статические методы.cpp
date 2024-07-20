#include<iostream>
#include<string>
using namespace std;

class Apple;//определение классов как прототипы функций
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

int Apple::count = 0;//инициализация статичной переменной

void Human::TakeApple(Apple& apple)
{
}

int main()
{
	setlocale(LC_ALL, "rus");

	Apple apple(150, "Red");
	Apple::ChangeColor(apple, "Green");//вызываем cтатический метод

	return 0;
}

