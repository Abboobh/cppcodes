#include<iostream>
#include<ctime>
using namespace std;

template <typename T> 
T Sum(T a, T b)
{
	return a + b;
}

//Для разных типов данных
template <typename T1, typename T2> 
T1 Sum(T1 a, T2 b)
{
	return a + b;
}

void main()
{
	setlocale(LC_ALL, "Rus");

}