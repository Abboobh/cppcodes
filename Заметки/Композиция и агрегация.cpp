#include<iostream>
#include<string>
using namespace std;

//Агрегация и композиция
//Композиция - когда вложенный класс не может существовать без верхнего класса, жесткая привязка одного объекта к другому
//Агрегация - когда класс модет использоваться с другими классами

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
		cout << "Кепка " << cap.GetColor() << "цвета" << endl;
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
		cout << "Моя кепка " << cap.GetColor() << " цвета" << endl;
	}

private:
	class Brain
	{
	public:
		void Think()
		{
			cout << "Я думаю" << endl;
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

