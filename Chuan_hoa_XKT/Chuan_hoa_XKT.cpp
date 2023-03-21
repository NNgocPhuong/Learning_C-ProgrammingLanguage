#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	string s;
	cout << "Nhap chuoi:";
	getline(cin, s);
	//xoa khoang trang o dau
	size_t n = s.length();
	while (s[0] == ' ') {
		strcpy(&s[0], &s[1]);
		n -= 1;
	}
	// xoa khoang trang o cuoi
	while (s[n - 1] == ' ') {
		strcpy(&s[n - 1], &s[n]);
		n -= 1;
	}
	// xoa khoang trang o giua
	for (size_t i = 0; i < n; i++)
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}
	}
	cout << "Xin chao " << s << "!";
	// dem so chu trong chuoi
	int dem = 0;
	for (size_t i = 0; i < n; i++) {
		if (s[i] != ' ' && s[i + 1] == ' ')
			dem++;
	}
	cout << "\nSo chu trong chuoi la: " << dem + 1;
}
