#include<iostream>
using namespace std;

class image {
	int hight;
	int width;
	unsigned char** pixel;
public:
	image(int _hight = 1, int _width = 1)
	{
		hight = _hight;
		width = _width;
		pixel = new unsigned char* [hight];
		for (int i = 0; i < hight; i++)
		{
			pixel[i] = new unsigned char[width];
		}
	}
	image(const image& a)
	{
		hight = a.hight;
		width = a.width;
		pixel = new unsigned char* [hight];
		for (int i = 0; i < hight; i++)
		{
			pixel[i] = new unsigned char[width];
		}
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				pixel[i][j] = a.pixel[i][j];
			}
		}
	}
	image operator=(image& a)
	{
		/*for (int i = 0; i < hight; i++)
		{
			delete[]pixel[i];
		}
		delete[]pixel;*/
		hight = a.hight;
		width = a.width;
		pixel = new unsigned char* [hight];
		for (int i = 0; i < hight; i++)
		{
			pixel[i] = new unsigned char[width];
		}
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				pixel[i][j] = a.pixel[i][j];
			}
		}
		return *this;
	}
	~image()
	{
		for (int i = 0; i < hight; i++)
		{
			delete[]pixel[i];
		}
		delete[]pixel;
	}
	int average()
	{
		int cnt = hight * width;
		int tong = 0;
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				tong += int(pixel[i][j]);
			}
		}
		int avg = tong / cnt;
		return avg;
	}
	friend istream& operator >> (istream& is, image& b);
};
istream& operator >> (istream& is, image& b)
{
	for (int i = 0; i < b.hight; i++)
	{
		delete[]b.pixel[i];
	}
	delete[]b.pixel;
	cout << "Nhap chieu dai va rong cua anh" << endl;
	is >> b.hight >> b.width;
	b.pixel = new unsigned char* [b.hight];
	for(int i =0;i< b.hight;i++)
	{
		b.pixel[i] = new unsigned char[b.width];
	}
	int n;
	for (int i = 0; i < b.hight; i++)
	{
		for (int j = 0; j < b.width; j++)
		{
			is >> n;
			b.pixel[i][j] = unsigned char(n);
		}
	}
	return is;
}
int main()
{
	image a;
	cin >> a;
	cout << "do sang trung binh la: " << a.average();

}