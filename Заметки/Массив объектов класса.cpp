#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class Image
{
public:
	void GetImageInfo()
	{
		for (int i = 0; i < LENGTH; i++)
		{
			cout << "#" << i << pixels[i].GetInfo() << endl;
		}
	}
	class Pixel//Ќовый класс
	{
	public:
		Pixel()
		{
			r = 0 + rand() % ((255 + 1) - 0);
			g = 0 + rand() % ((255 + 1) - 0);
			b = 0 + rand() % ((255 + 1) - 0);
		}

		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}

		string GetInfo()
		{
			return "\tPixel: r = " + to_string(r) + "\t g = " + to_string(g) + "\t b = " + to_string(b);
		}
	private:
		int r;
		int g;
		int b;
	};

	static const int LENGTH = 5;

	Pixel pixels[5]//инициализируем масив классов
	{
		Pixel(0,1,5),
		Pixel(4,7,10),
		Pixel(6,17,23),
		Pixel(7,15,14),
		Pixel(5,4,12),
	};
};

int main()
{
	setlocale(LC_ALL, "rus");
	//srand(time(NULL));

	Image img[5];

	img[0].GetImageInfo();
	cout << endl;
	img[1].GetImageInfo();
	cout << endl;

	Image::Pixel arr[5];
	cout << "#p" << arr[0].GetInfo() << endl;
	cout << endl;
	cout << "#p" << arr[1].GetInfo() << endl;

	arr[0] = Image::Pixel(666, 666, 666);
	cout << "#p" << arr[0].GetInfo() << endl;

	Image::Pixel* pix = new Image::Pixel[10];



	delete[] pix;
	return 0;
}

