#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class twoDimensionalArray
{
	int** data;
	int sizeX;
	int sizeY;
public:
	twoDimensionalArray(int sizeX, int sizeY)
	{
		cout << "[ онструктим массив]" << endl;
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
		cout << "[ƒеконструктим массив]" << endl;
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
				data[i][j] = rand() % 20;//генерируем и заполн€ем случайными данными
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

	twoDimensionalArray Array_1(4, 3);
	Array_1.FillArray();
	Array_1.PrintArray();

	return 0;
}