#include<iostream>
#include<ctime>
using namespace std;

void Func(int* pvariable_1, int* pvariable_2);

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int x = 10, y = 15;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	Func(&x, &y);

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
} 

void Func(int* pvariable_1, int* pvariable_2)
{
	int a = *pvariable_1;
	int b = *pvariable_2;

	*pvariable_1 = b;
	*pvariable_2 = a;
}