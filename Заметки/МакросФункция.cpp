#include<iostream>
#include<ctime>
#include<string>
#define MyFunction(x,y) ((x)*(y))
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	
	cout << MyFunction(1,2) << endl;
}
