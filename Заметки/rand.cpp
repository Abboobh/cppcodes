#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int min = 100, max = 250;
	srand(time(NULL)); //Отправная точка для функции rand()

	int a = rand(); //Псевдогенератор случайных чисел

	int b = min + rand() % ((max + 1) - min);; //Случайные числа в диапазоне

	cout << b << endl;
}
