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
		cout << this << "\t�������� �����������" << endl;
	}

	MyClass(const MyClass &other)//����������� �����������
	{
		this->size = other.size;//��� ����� ������� ������ ����������� ���������� �� ����������� ������� ������

		this->data = new int[other.size];//�������� ����� ��� ������������� ������� ������
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << this << "\t�������� ����������� �����������" << endl;
	}

	~MyClass()//����������
	{
		cout << this << "\t�������� ����������" << endl;
		delete[] data;// ������� ����� �� ������
	}

	MyClass& operator = (const MyClass& other)
	{
		cout << "�������� �������� = " << this << endl;
		this->size = other.size;
		if (this->data != nullptr)
		{
			delete[] this->data;
		}
		this->data = new int[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}

		return *this;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(5);

	//MyClass b = a;//���������� ����������� �����������, ������������ b(a)
	//b = a; ���������� ������ ���������

	return 0;
}