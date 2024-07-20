	friend void ChangeX(Point& value);//указание дружественной функции

	void ChangeX(Point& value)//собственно сама дружественная функция, которая может объявлятся не в классе а в любом месте

	{
		value.x = -1;
	}