	int a = 5;//ќбъ€вление переменной в пам€ти

	int *pa = &a;//”казатель на переменную "а" после * можно указать любое название

	cout << px << endl;//указываетс€ ссылка на адресс пам€ти

	cout << *px << endl;//ќбращение к самой переменной

#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int var = 5;//ќбъ€вление переменной в пам€ти
	int* px = &var;//”казатель на переменную "var"
	int* px2 = &var;

	cout << "var\t" << var << endl;
	cout << "px\t" << px << endl;
	cout << "px2\t" << px2 << endl;

	*px2 = 2;

	cout << "var\t" << var << endl;
}

void main()
{
	setlocale(LC_ALL, "Rus");

	const int SIZE = 5;
	int array[SIZE]{ 3,54,7,23,7 };

	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << endl;
	}
	cout << "==========================" << endl;
	int* pArray = array;//”казатель на массив // array=pArray

	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArray + i) << endl;//"*" - оператор разименовани€
	}
}

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int var = 5;

	int* pvar = &var;//указатель
	int& varRef = var;//ссылка 

	//все указывает на область в оперативной пам€ти
	//в ссылках нет арифметики указателей, а в указател€х как ни странно есть)))
} 