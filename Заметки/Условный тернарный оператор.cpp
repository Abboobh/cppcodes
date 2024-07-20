void main()
{
	setlocale(LC_ALL, "RUS");

	int a;
	cin >> a;

	a < 10 ? cout << "А меньше 10" << endl : a == 10 ? cout << "А равно 10" << endl : cout << "А больше 10" << endl;// тернарный оператор, можно делать двойные условия
}