#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	const char* strArr[] = { "Hello", "World", "TEST" };//Инициализируется двумерный массив. Массив массивов char[]
	 
	for (int i = 0; i < 3; i++)
	{
		cout << strArr[i] << endl;
	}
}