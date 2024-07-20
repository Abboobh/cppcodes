	int size = 10;

	int* array_1 = new int[size];
	int* array_2 = new int[size];

	FillArray(array_1, size);
	FillArray(array_2, size);

	cout << "FirstArray = \t";
	ShowArray(array_1, size);
	cout << "SecondArray = \t";
	ShowArray(array_2, size);

	cout << endl << endl;

	delete[] array_1;

	for (int i = 0; i < size; i++)
	{
		array_1[i] = array_2[i];
	}

	cout << "FirstArray = \t";
	ShowArray(array_1, size);
	cout << "SecondArray = \t";
	ShowArray(array_2, size);

	delete[] array_1;
	delete[] array_2;