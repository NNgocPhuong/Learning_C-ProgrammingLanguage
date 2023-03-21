#include<iostream>
using namespace std;

int main()
{
	int a[4], b[6];
	int m, n;
	cin >> m >> n;
	cout << "Nhap cac phan tu cua mang a" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	cout << "Nhap cac phan tu cua mang b" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (b[i] == a[j]) {
				dem++;
				if (dem > 1)
					for (int k = 0; k < dem-1; k++)
						cout << b[i];
			}
			else {
				cout << b[i];
			}
		}
	}

}