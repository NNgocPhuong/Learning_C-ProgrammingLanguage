#include<iostream>
using namespace std;

class Image {
private:
	int height, width;
	unsigned char** pixel;
public:
	Image(int _height = 1, int _width = 1) {
		height = _height;
		width = _width;
		pixel = new unsigned char* [height];
		for (int i = 0; i < height; i++)
			pixel[i] = new unsigned char[width];
	}
	Image(const Image& obj) {
		this->height = obj.height;
		this->width = obj.width;
		this->pixel = new unsigned char* [height];
		for (int i = 0; i < height; i++)
			pixel[i] = new unsigned char[width];
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				this->pixel[i][j] = obj.pixel[i][j];
			}
		}
	}
	~Image() {
		for (int i = 0; i < height; i++)
			delete[] pixel[i];
		delete[] pixel;
	}

	friend void binary(Image& obj, unsigned char threshold);
	int intensityAverage() {
		int avg = 0;
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++)
				avg += int(pixel[i][j]);
		}
		avg /= (height * width);
		return avg;
	}
	void countBinImg() {
		int dark = 0, white = 0;
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (pixel[i][j] == 0)	dark++;
				if (pixel[i][j] == 255)	white++;
			}
		}
		cout << "so diem den:" << dark << endl
			<< "so diem trang:" << white << endl;
	}
	friend bool changeImage(Image& obj, int x_width, int y_height, int n) {
		if (n > obj.width || n > obj.height || n < 0 || x_width < 0 || y_height < 0 || x_width >= obj.width || y_height >= obj.height) {
			cout << "loi kich thuoc" << endl;
			return false;
		}
		if (n % 2 == 0)	n--;
		if ((n == obj.width && x_width != n / 2) || (n == obj.height && y_height != n / 2)) {
			cout << "loi pham vi" << endl;
			return false;
		}
		Image tmp(n, n);
		for (int i = 0, y = -n / 2; i < n; i++, y++) {
			for (int j = 0, x = -n / 2; j < n; j++, x++) {
				tmp.pixel[i][j] = obj.pixel[y_height + y][x_width + x];
			}
		}
		obj = tmp;
		return true;
	}
	friend istream& operator >>(istream& is, Image& obj) {
		for (int i = 0; i < obj.height; i++)
			delete[] obj.pixel[i];
		delete[] obj.pixel;
		cout << "nhap kich thuoc anh [height x width]:";
		is >> obj.height;
		is.ignore(1, 'x');
		is >> obj.width;
		obj.pixel = new unsigned char* [obj.height];
		for (int i = 0; i < obj.height; i++)
			obj.pixel[i] = new unsigned char[obj.width];
		int n;
		for (int i = 0; i < obj.height; i++) {
			for (int j = 0; j < obj.width; j++) {
				cout << "do sang diem anh [" << i << "," << j << "]:";
				is >> n;
				obj.pixel[i][j] = static_cast<unsigned char>(n);
			}
		}
		return is;
	}
	friend ostream& operator <<(ostream& os, const Image& obj) {
		for (int i = 0; i < obj.height; i++) {
			os << endl;
			for (int j = 0; j < obj.width; j++) {
				os << static_cast<int>(obj.pixel[i][j]) << '\t';
			}
		}
		return os;
	}
	Image& operator =(const Image& obj) {
		for (int i = 0; i < height; i++)
			delete[] pixel[i];
		delete[] pixel;
		this->height = obj.height;
		this->width = obj.width;
		this->pixel = new unsigned char* [height];
		for (int i = 0; i < height; i++)
			pixel[i] = new unsigned char[width];
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				this->pixel[i][j] = obj.pixel[i][j];
			}
		}
		return *this;
	}
};
int main() {
	Image img;
	cin >> img;
	cout << "anh" << endl << img << endl;
	int avg;
	avg = img.intensityAverage();
	cout << "muc sang trung binh cua anh:" << avg << endl;
	binary(img, static_cast<unsigned char>(avg));
	cout << "chuyen anh ve dang den trang" << endl << img << endl;
	img.countBinImg();
	if (changeImage(img, 2, 2, 3))
		cout << "cat anh voi kich thuoc 3x3, tam (2,2)" << endl << img << endl;
	return 0;
}

void binary(Image& obj, char unsigned threshold)
{
	for (int i = 0; i < obj.height; i++) {
		for (int j = 0; j < obj.width; j++) {
			if (obj.pixel[i][j] <= threshold)
				obj.pixel[i][j] = 0;
			else	obj.pixel[i][j] = 255;
		}
	}
}

