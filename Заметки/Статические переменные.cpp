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
	static int count;//статичные переменные одинаковы для всех экземпляров

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		count++;
	}
private:
	int weight;
	string color;
};

int Apple::count = 0;//инициализация статичной переменной

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

