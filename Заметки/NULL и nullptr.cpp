#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int* pvariable = new int;//просим выделить динамическую память для нашей программы

	cout << "Адресс памяти:\t\t[" << pvariable << "]" << endl;
	*pvariable = 10;//присваиваем значенние в выделенную для нас память
	cout << "Значение в памяти:\t[" << *pvariable << "]" << endl;

	delete pvariable;//удаляем выделенное место, это обязательно, что бы не было утечки памяти
	cout << pvariable << endl;

	pvariable = NULL; //указываем нулевое значение, значит на ничего не указывает

	if (pvariable != NULL)//проверяем указывает ли адресс на что то
	{
		cout << pvariable << endl;
	}

	delete pvariable;//если указатель нулевой, то можно еще раз уго удалить


	//NULL - это нулевое значение, и компилятор может перепутать с int, а nullptr - это отдельная структура
	//для уборки мусора сначало удаляем delete а потом затираем указатель NULL или nullptr;
}