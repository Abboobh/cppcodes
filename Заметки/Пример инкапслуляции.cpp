#include<iostream>
#include<ctime>
#include<string>

using namespace std;

class CoffeeGrinder
{
private:
	bool CheckVoltage()
	{

		return true;
	}

public:
	void Start()
	{
		if (CheckVoltage()) 
		{
			cout << "������ ����������" << endl;
		}
		else
		{
			cout << "��� ����������" << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	CoffeeGrinder model_1;
	model_1.Start();

}
