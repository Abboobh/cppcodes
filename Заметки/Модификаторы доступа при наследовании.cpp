#include<iostream>
#include<string>
using namespace std;

//������������ ������� ��� ������������

class One
{
public:
	string msgOne = "One";//�������� ���� � �����
private:
	string msgTwo = "Two";//������� ��� ����, ����� ������ ��� �������
protected:
	string msgThree = "Three";//�������� ������ �����������
};

class Two : public One
{
public:
	void Message()
	{
		cout << msgThree << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	Two two;
	two.Message();

	return 0;
}

