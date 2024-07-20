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
		apple.weight -= 50;
	}
};
class Apple
{
	friend Human;//указание дружественного класса

public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}
private:
	int weight;
	string color;
};


int main()
{
	setlocale(LC_ALL, "rus");

	Apple apple(150, "Red");

	Human human;
	human.EatApple(apple);

	return 0;
}

void Human::TakeApple(Apple& apple)
{

}
