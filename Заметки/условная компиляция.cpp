#include<iostream>
#include<ctime>
#include<string>
#define DEBUG //если закоментировать то ifdef не будет работать
#define DEBUG_1 4

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

#ifdef DEBUG
	cout << "Начало цикла" << endl;
#endif // DEBUG


	for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}

#ifdef DEBUG //ifndef если с отрицанием))
	cout << "Конец цикла" << endl;
#else //elif - эквивален else if
	cout << "Дебаг не определен" << endl;
#endif // DEBUG

#if 0

#endif // 0

}