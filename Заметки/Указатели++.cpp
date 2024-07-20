#include<iostream>
#include<ctime>
using namespace std;

//Урок Иосифа Вассарионыча

void Func(int variable);//указываем просто переменную
void Func2(int* variable);//указываем, что это указатель
void Func3(int& variable);//указываем, что это ссылка

void main()
{
	int value = 5;
	cout << "value =" << value << endl << endl;

	cout << "Function 1:" << endl;
	Func(value);//передается переменная в функцию
	cout << "value = " << value << endl << endl;

	cout << "Function 2:" << endl;
	Func2(&value);//передается переменная в функцию по ссылке, требуется "&" - указания адреса в памяти
	cout << "value = " << value << endl << endl;

	cout << "Function 3:" << endl;
	Func3(value);//передается переменная в функцию по ссылке, доп. операторов не требуется
	cout << "value = " << value << endl << endl;
}

void Func(int variable)//передача переменной в функцию
{
	variable = 1;//измененния значения внутри функции
}

void Func2(int* variable)//передача переменной по указателю. Обязательно указывать оператор разименования
{
	*variable = 2;//изменения значения по указателю с оператором разименования
}

void Func3(int& variable)//передача переменной по ссылке
{
	variable = 3;//изменения значения по ссылке. оператор разименования не нужен
}