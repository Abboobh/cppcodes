void FillArray(int* const array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}
}

void ShowArray(const int* const array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}