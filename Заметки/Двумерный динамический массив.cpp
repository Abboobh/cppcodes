#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int size_x = 0, size_y = 0;

	cout << "¬ведите количесвто строк" << endl;
	cin >> size_x;
	cout << "¬ведите количесвто столбцов" << endl;
	cin >> size_y;
	cout << endl;

	int** array = new int* [size_x];//создаем массив указателей

	for (int i = 0; i < size_x; i++)
	{
		array[i] = new int[size_y];//в каждом индексе массива указателей, создаем указатель на массив
	}

	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++) 
		{
			array[i][j] = rand() % 20;//генерируем и заполн€ем случайными данными
		}
	}

	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++)
		{
			cout << "[" << array[i][j] << "]" << "\t";//выводим динмаический массив
		}
		cout << endl;
	}

	for (int i = 0; i < size_x; i++)
	{
		delete[] array[i];//удалаем указатели в каждом индеке
	}

	delete[] array;
}