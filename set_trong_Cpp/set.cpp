#include<iostream>
#include<set>
using namespace std;

// multiset<kieu du lieu> ten;

int main()
{
	/*int n;
	cout << "Nhap so luong phan tu trong set: ";
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;*/
	multiset<int> a;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.insert(x);
	}
	for (int x : a)
	{
		cout << x << " ";
	}
	cout << endl;
	cout << a.count(5) << endl;
}
