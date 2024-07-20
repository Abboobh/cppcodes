#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class MyClass
{
	int* data;//���������
	int size;
public:
	MyClass(int size)
	{
		this->size = size;//��� ����� ������� ������ ����������� ���������� �� ���
		this->data = new int[size];//�������� ����� ��� ������������� ������� ������
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << data << "\t�������� �����������" << endl;
	}

	MyClass(const MyClass &other)//����������� �����������
	{
		this->size = other.size;//��� ����� ������� ������ ����������� ���������� �� ����������� ������� ������

		this->data = new int[other.size];//�������� ����� ��� ������������� ������� ������
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
	}

	~MyClass()//����������
	{
		cout << data << "\t�������� ����������" << endl;
		delete[] data;// ������� ����� �� ������
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	return 0;
}