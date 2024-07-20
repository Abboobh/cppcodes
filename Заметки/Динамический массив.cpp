#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL)); //Отправная точка для функции rand()

	int size = 0;//указываем переменную с указателем размера массива
	
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << endl;
	cout << "Ячейка\tЗначение\tАдресс" << endl;

	int* array = new int[size];//выделяем место в памяти для динамического массива

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)//перебираем массив
	{
		cout << "[" << i << "]" << "\t";
		cout << "[" << array[i] << "]" << "\t\t";//выводим значение массива по индеку
		cout << "[" << array + i << "]" << endl;//выводим адресса в памяти массива. здесь арифметика указателей
		//намоминание, моно раименовать массив вот так *(array + i)
	}

	delete[] array;//удаляем динамический массив в памяти
}