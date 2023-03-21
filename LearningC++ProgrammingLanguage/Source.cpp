#include<iostream>
#include <iomanip>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int gio = n / 3600;
	int phut = (n - (gio * 3600)) / 60;
	int giay = n - (gio * 3600) - (phut * 60);
	cout << gio << ":" << phut << ":" << giay;
	return 0;
}