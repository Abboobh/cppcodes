#include<iostream>
#include<ctime>
using namespace std;

//��������� �������[
int Sum(int a, int b);
float Sum(float a, float b);
//��������� �������]

void main()
{
	setlocale(LC_ALL, "Rus");
	float x = 5.5, y = 7.5;
	cout << Sum(x, y) << endl;
}

//�������
int Sum(int a, int b)
{
	return a + b;
}

float Sum(float a, float b)
{
	return a + b;
}