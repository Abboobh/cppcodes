#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class MyClass
{
	int data;
public:
	MyClass(int value)
	{
		data = value;
		cout << data << "\t�������� �����������" << endl;
	}

	~MyClass()//����������
	{
		cout << data << "\t�������� ����������" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass A_A(1);
	MyClass B_B(2);

	return 0;
}