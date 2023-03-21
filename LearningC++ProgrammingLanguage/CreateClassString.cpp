#include<iostream>
using namespace std;

class String {
private:
	int length;
	char* data;
public:
	String(int n = 0, char* p = nullptr) {
		length = n;
		data = new char[length];
		for (int i = 0; i < length; i++)
		{
			data[i] = p[i];
		}
	}
	String(const String& a) {
		length = a.length;
		data = new char[length];
		for (int i = 0; i < length; i++)
		{
			data[i] = a.data[i];
		}
	}
	String& operator = (const String& a) {
		delete[]data;
		length = a.length;
		data = new char[length];
		for (int i = 0; i < length; i++)
		{
			data[i] = a.data[i];
		}
		return *this;
	}
	~String() {
		length = 0;
		delete[]data;
	}
	friend istream& operator >>(istream& is, String& a);
	friend ostream& operator << (ostream& os,const String& a);
	String operator + (String& a) {
		String T;
		delete[]T.data;
		T.length = this->length + a.length - 1;
		T.data = new char[T.length];
		for (int i = 0; i < this->length - 1; i++)
		{
			T.data[i] = data[i];
		}
		int j = 0;
		for (int i = this->length - 1; i < T.length; i++)
		{
			T.data[i] = a.data[j];
			j++;
		}
		return T;
	}
	/*String match(String s)
	{
		String x;
		x.length = length + s.length - 1;
		delete[] x.data;
		x.data = new char[x.length];
		for (int i = 0; i < length - 1; i++)
		{
			x.data[i] = data[i];
		}
		int j = 0;
		for (int i = length - 1; i < x.length; i++)
		{
			x.data[i] = s.data[j];
			j++;
		}
		return x;
	}*/
};
istream& operator >>(istream& is, String& a) {
	delete[]a.data;
	cout << "Nhap do dai: ";
	is >> a.length;
	cin.ignore();
	a.data = new char[a.length];
	is.getline(a.data, a.length);
	return is;
}
ostream& operator << (ostream& os, const String& a) {
	os << a.data << endl;
	return os;
}

int main()
{
	String a, b;
	cin >> a;
	cin >> b;
	String c;
	//c = a.match(b);
	c = a + b;
	cout << c;
	return 0;
}