#include<iostream>
#include<ctime>
#include<string>
using namespace std;

//тип возврата(*имя указателя)(Передаваемые параметры)

string GetDataFromBD()//Функция для примера, для справки, название функции для получения чего либо откуда либо лучше начинать со слов Get
{
	return "Data From BD";
}

string GetDataFromWebServer()//Функция для примера
{
	return "Data From WebServer";
}

void ShowInfo(string (*Func)())//В качестве передоваемого значение указывается указатель на функцию
{
	cout << Func() << endl;
}

void main()
{
	setlocale(LC_ALL, "RUS");

	ShowInfo(GetDataFromBD);//Вызываем функцию ShowInfo() и в качестве передаваемого параметра передаем нужную нам функцию
	ShowInfo(GetDataFromWebServer);
}
