#include<iostream>
using namespace std;

int main()
{
	int n, a;
	int b;
	cin >> n >> a >> b;
	int t;
	if (a >= n * b / 100)
		cout << 0;
	else {
		if ((n * b) % 100 != 0){
			int v = n * b / 100;
			t = v - a + 1;
			cout << t;
		}
		else {
			int t = n * b / 100 - a;
			cout << t << endl;
		}
	}
}