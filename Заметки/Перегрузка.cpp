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

class Point
{
private:
	int x;
	int y;

public:

	Point(int x, int y)//конструктор класса, если нужен доступ, вставить в секцию public
	{
		this->x = x;
		this->y = y;
	}

	Point()//конструктор с параметрами по умолчанию
	{
		x = 0;
		y = 0;
	}

	void Print()
	{
		cout << "x = [" << x << "]\t" << "y = [" << y << "]" << endl;
	}

	void SetX(int value)
	{
		x = value;
	}
	void SetY(int value)
	{
		y = value;
	}

	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}

	bool operator == (const Point& other)
	{
		return (this->x == other.x && this->y == other.y);
	}
	bool operator != (const Point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}

	Point operator + (const Point& other)
	{
		Point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}
	Point& operator ++()
	{
		this->x++;
		this->y += 1;

		return *this;
	}
	Point& operator ++(int value)
	{
		Point temp(*this);

		this->x++;
		this->y++;

		return temp;
	}
	Point& operator --()
	{
		this->x--;
		this->y--;

		return *this;
	}
	Point& operator --(int value)
	{
		Point temp(*this);

		this->x--;
		this->y--;

		return temp;
	}
};

class twoDimensionalArray
{
	int** data;
	int sizeX;
	int sizeY;
public:
	twoDimensionalArray(int sizeX, int sizeY)
	{
		cout << "[Конструктим массив]" << endl;
		this->sizeX = sizeX;
		this->sizeY = sizeY;
		this->data = new int* [sizeX];
			for (int i = 0; i < sizeX; i++)
			{
				data[i] = new int[sizeY];
			}
	}
	~twoDimensionalArray()
	{
		cout << "[Деконструктим массив]" << endl;
		for (int i = 0; i < sizeX; i++)
		{
			delete[] data[i];
		}
		delete[] data;
	}

	void FillArray()
	{
		for (int i = 0; i < sizeX; i++)
		{
			for (int j = 0; j < sizeY; j++)
			{
				data[i][j] = rand() % 20;//генерируем и заполняем случайными данными
			}
		}
	}
	void PrintArray() 
	{
		for (int i = 0; i < sizeX; i++)
		{
			for (int j = 0; j < sizeY; j++)
			{
				cout << "[" << data[i][j] << "]" << "\t";//выводим динмаический массив
			}
			cout << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	Point a(4, 5);
	Point b(9, 1);

	bool result = a == b;

	Point c = a + b;

	c.Print();

	return 0;
}