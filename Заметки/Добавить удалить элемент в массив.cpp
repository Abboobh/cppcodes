#include<iostream>
#include<ctime>
using namespace std;

void FillArray(int* const array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}
}
void ShowArray(const int* const array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "[" << array[i] << "]" << "\t";
	}
	cout << endl;
}
void push_back(int*& array, int& size,const int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = array[i];
	}
	newArray[size] = value;
	size++;
	delete[] array;

	array = newArray;
}
void pop_back(int*& array, int& size)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = array[i];
	}

	delete[] array;

	array = newArray;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	//srand(time(NULL));

	int size = 5;
	int* array = new int[size];
	FillArray(array, size);
	ShowArray(array, size);

	push_back(array, size, 111);//передаем указатель на массив по ССЫЛКЕ
	ShowArray(array, size);

	pop_back(array, size);
	ShowArray(array, size);

	delete[] array;
}