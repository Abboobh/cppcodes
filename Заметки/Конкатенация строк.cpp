#include<iostream>
#include<ctime>
#include<string>//Библиотека для строк
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	//Старый стиль как у СИ
	char result[255]{};
	char str1[255] = "Hello";
	char str2[255] = "world";

	strcat_s(result, str1);//Добовляет к строке другую строку
	strcat_s(result, ", ");
	strcat_s(result, str2);//угадай

	cout << result << endl;
	cout << "sizeof(" << sizeof(result) << ")" << endl;
	cout << endl;
	//С помощью библиотеки string:

	string str_1 = "Хелло";
	string str_2 = "ворлд";
	string result_2;

	result_2 = str_1 + ", " + str_2;
	cout << result_2 << endl;
	cout <<"sizeof(" << sizeof(result_2) <<")" << endl;
}
