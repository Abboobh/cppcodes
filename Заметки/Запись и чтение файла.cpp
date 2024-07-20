#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
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

	string path = "res/Config.cfg";//������ ���� � �����

	//Point point(2, 4, 7);
	//Point point2(1, 2, 3);
	//point.Print();
	//ofstream file_out;
	//file_out.open(path, ofstream::app);
	//if (!file_out.is_open())
	//{
	//	cout << "File not found" << endl;
	//}
	//else
	//{
	//	cout << "File is open" << endl;
	//	file_out.write((char*)&point, sizeof(Point));//�������� ������ � ���� char, ��������� ���������� ����
	//}
	//ifstream file_in;
	//file_in.open(path);
	//if (!file_in.is_open())
	//{
	//	cout << "File not found" << endl;
	//}
	//else
	//{
	//	cout << "File is open" << endl;
	//	Point temp_point;
	//	while (file_in.read((char*)&temp_point, sizeof(Point)))//���������, ���� ���� ��� ��������� � �����, � ������� � ������ temp_point ������
	//	{
	//		temp_point.Print();
	//	}
	//}
	//file_out.close();
	//file_in.close();

	fstream file_stream;
	file_stream.open(path, fstream::in | fstream::out | fstream::app);//����������� ��������� �������� ����� ��������� ��� |

	if (!file_stream.is_open())
	{
		cout << "File not found" << endl;
	}
	else
	{
		string message;
		int command;
		cout << "1 - ����� ������" << endl;
		cout << "2 - ����� ������" << endl;
		switch (command)
		{
		case 1:
			cout << "������� �����" << endl;
			SetConsoleCP(1251);//����������� ��������� �������
			cin >> message;
			file_stream << message << "\n";
			SetConsoleCP(866);//���������� ��������� �������, ��� ���������� ������ ���������
			break;

		case 2:
			while (!file_stream.eof())
			{
				message = "";//�������� ��������� ����������
				file_stream >> message;
				cout << message << endl;
			}
			break;

		default:
			cout << "�������� �� �������" << endl;
			break;
		}
	}

	return 0;
}