#include <iostream>
#include <vector>
using namespace std;
// vector <kieu du lieu> ten_vector
// push_back
// size

int main()
{
	vector <int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	/*for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\t";
	}*/
	/*for (int x : v)
	{
		cout << x << "\t";
	}*/
	for (vector <int>::iterator it = v.begin(); it != v.end(); ++it) {
		cout << *it << "\t";
	}
	/*for (auto it = v.begin(); it != v.end(); ++it) {
		cout << *it << "\t";
	}*/
	/*cout << v[2] << endl;
	cout << *(v.begin() + 2) << endl;*/
	cout << endl;
	vector <int> a(10);
	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];
	}
	a.push_back(30);
	for (vector <int>::iterator t = a.begin(); t != a.end(); ++t) {
		cout << *t << "\t";
	}
	cout << endl;
	cout << a.size();
	return 0;
}