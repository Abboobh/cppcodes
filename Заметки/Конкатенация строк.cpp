#include<iostream>
#include<ctime>
#include<string>//���������� ��� �����
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	//������ ����� ��� � ��
	char result[255]{};
	char str1[255] = "Hello";
	char str2[255] = "world";

	strcat_s(result, str1);//��������� � ������ ������ ������
	strcat_s(result, ", ");
	strcat_s(result, str2);//������

	cout << result << endl;
	cout << "sizeof(" << sizeof(result) << ")" << endl;
	cout << endl;
	//� ������� ���������� string:

	string str_1 = "�����";
	string str_2 = "�����";
	string result_2;

	result_2 = str_1 + ", " + str_2;
	cout << result_2 << endl;
	cout <<"sizeof(" << sizeof(result_2) <<")" << endl;
}
