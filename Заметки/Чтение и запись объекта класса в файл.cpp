#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Print()
	{
		cout << x << "\t" << y << "\t" << z << "\t" << endl;
	}
private:
	int x;
	int y;
	int z;
};

int  main()
{
	setlocale(LC_ALL, "Rus");

	string path = "res/Config.cfg";//задаем путь к файлу

	Point point(2, 4, 7);
	point.Print();

	ofstream file_out;
	file_out.open(path, ofstream::app);

	if (!file_out.is_open())
	{
		cout << "File not found" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		file_out.write((char*)&point, sizeof(Point));//приводим объект к типу char, указываем количество байт
	}

	ifstream file_in;
	file_in.open(path);

	if (!file_in.is_open())
	{
		cout << "File not found" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		Point temp_point;
		while (file_in.read((char*)&temp_point, sizeof(Point)))//считывает, пока есть что считывать с файла, и заносит в объект temp_point данные
		{
			temp_point.Print();
		}
	}

	file_out.close();
	file_in.close();
	return 0;
}