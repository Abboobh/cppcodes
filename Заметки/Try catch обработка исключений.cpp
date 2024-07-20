#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
using namespace std;

int  main()
{
	setlocale(LC_ALL, "Rus");
	string path = "res/Config.cfg";//задаем путь к файлу

	ifstream file_in;
	file_in.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		cout << "Попытка открыть файл" << endl;
		file_in.open(path);
		cout << "Файл успешно открыт" << endl;
	}
	catch (const exception& ex)//в качестве параметра можно передать ifstream::failure
	{
		cout << ex.what() << endl;
		cout << "Ошибка открытия файла!" << endl;
	}
	
	return 0;
}