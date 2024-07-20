#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int  main()
{
	setlocale(LC_ALL, "Rus");

	string path = "res/Config.cfg";//задаем путь к файлу

	//ofstream file;//создаем объект класса для записи в файл
	//file.open(path, ofstream::app);//открывает файл или создаем, если его не было, и указываем параметр добавления к данным,
	//if (!file.is_open())//проверяем, открылся ли файл
	//{
	//	cout << "Не удалось открыть файл" << endl;
	//}
	//else 
	//{
	//	file << "File for data";//вписываем строку в файл
	//}
	//file.close();//закрыли файл

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Не удалось открыть файл" << endl;
	}
	else
	{
		cout << "Файл открыn" << endl;
		char ch;
		string str;
		//while (fin.get(ch))//перебирает посимвольно
		//{
		//	cout << ch;
		//}

		//while (!fin.eof())//считывает файл до конца
		//{
		//	str = "";//затираем старое значение
		//	fin >> str;
		//	cout << str << endl;
		//}

		while (!fin.eof())//считывает файл до конца
		{
			str = "";//затираем старое значение
			getline(fin, str);//считывает построчно
			cout << str << endl;
		}
	}

	fin.close();

	return 0;
}