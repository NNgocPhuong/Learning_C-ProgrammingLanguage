#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;

	// O(logn)
	// size
	// insert
	// find
	// count
	// Erase

	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(300);
	s.insert(100);
	cout << s.size() << endl;
	if (s.count(100) != 0)
		cout << "found!" << endl;
	else
		cout << "Not found!" << endl;
	s.erase(200);
	cout << s.size() << endl;
	s.insert(400);
	s.insert(600);
	s.insert(500);
	for (int x : s)
	{
		cout << x << "  ";
	}
	cout << endl;
	cout << s.size() << endl;
	cout << *s.begin() << endl;
	cout << *s.rbegin() << endl;
	return 0;
}
