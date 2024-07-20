#include<iostream>
#include<ctime>
using namespace std;

void CodeConvert(const char* str);
void LenghtOfString(const char* str);

void main()
{
	setlocale(LC_ALL, "RUS");

	const char* str = "Я самый лучший";
	CodeConvert(str);
	LenghtOfString(str);
}

void CodeConvert(const char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i] << "\t" << "code =\t[" << int(str[i]) << "]\t" << "Adress =\t[" << "]" << endl;
	}
}
void LenghtOfString(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	cout << "Длинна строки = [" << i << "]" << endl;
}