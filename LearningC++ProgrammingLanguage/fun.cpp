//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int *a, n;
//	int max;
//	cout << "Nhap so phan tu cua mang:";
//	cin >> n;
//	a = new int[n];
//	if (n < 2) {
//		cout << "0";
//	}
//	else {
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		max = a[0] * a[1];
//		for (int i = 0; i < n; i++)
//		{
//			if ((a[i] * a[i + 1] > max))
//				max = a[i] * a[i + 1];
//		}
//		cout << endl;
//		cout << max;
//	}
//	delete[]a;
//	return 0;
//}

#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string s = "Nguyen Ngoc Phuong  thon 6 Vu Quang Doan Hung Phu Tho";
	stringstream ss(s);
	string tmp;
	int count = 0;
	while (ss >> s)
	{
		count++;
	}
	cout << count;
	return 0;
}
