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
	
}

