#include<iostream>
#include<string>
using namespace std;

class Apple;//определение классов как прототипы функций
class Human;

class Human
{
public:
	void TakeApple(Apple& apple);
};


class Apple
{
public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}
private:
	int weight;
	string color;

	friend void Human::TakeApple(Apple& apple);
};


int main()
{
	setlocale(LC_ALL, "rus");

	Apple apple(150, "Red");

	return 0;
}

void Human::TakeApple(Apple& apple)
{
	apple.color;
}
