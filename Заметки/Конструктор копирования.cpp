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
		cout << data << "\tВызвался конструктор" << endl;
	}

	MyClass(const MyClass &other)//конструктор копирования
	{
		this->size = other.size;//для этого объекта класса присваиваем переменную из копируемого объекта класса

		this->data = new int[other.size];//выделяем место для динамического массива данных
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
	}

	~MyClass()//деструктор
	{
		cout << data << "\tВызвался деструктор" << endl;
		delete[] data;// удаляем место из памяти
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	return 0;
}