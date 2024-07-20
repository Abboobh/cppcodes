#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class MyClass
{
	int* data;//указатель
	int size;
public:
	MyClass(int size)
	{
		this->size = size;//для этого объекта класса присваиваем переменную из вне
		this->data = new int[size];//выделяем место для динамического массива данных
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << this << "\tВызвался конструктор" << endl;
	}

	MyClass(const MyClass &other)//конструктор копирования
	{
		this->size = other.size;//для этого объекта класса присваиваем переменную из копируемого объекта класса

		this->data = new int[other.size];//выделяем место для динамического массива данных
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << this << "\tВызвался конструктор копирования" << endl;
	}

	~MyClass()//деструктор
	{
		cout << this << "\tВызвался деструктор" << endl;
		delete[] data;// удаляем место из памяти
	}

	MyClass& operator = (const MyClass& other)
	{
		cout << "Вызвался оператор = " << this << endl;
		this->size = other.size;
		if (this->data != nullptr)
		{
			delete[] this->data;
		}
		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}

		return *this;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(5);

	//MyClass b = a;//вызывается конмтруктор копирования, эквивалентно b(a)
	//b = a; копируется просто указатель

	return 0;
}