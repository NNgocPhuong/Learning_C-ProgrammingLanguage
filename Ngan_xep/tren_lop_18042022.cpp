#include<iostream>
#define EMPTY -1
using namespace std;
template<class T>
class stack{
	T* data;
	int size;
	int top;
public:
	stack(int _size = 0) : size(_size) {
		top = EMPTY;
		data = new T[size];
	}
	~stack()
	{
		delete[]data;
	}
	void Push(T a) {
		data[++top] = a;
	}
	T Pop() {
		return data[top--];
	}
	T Peek() {
		return data[top];
	}
	bool Is_empty() {
		return top == EMPTY;
	}
	bool Is_full() {
		return top == size - 1;
	}
};

int main()
{
	/*int n;
	cout << "Nhap so phan tu cua stack: ";
	cin >> n;
	stack<int> s(n);
	for (int i = 0; i < n; i++)
	{
		int x; 
		cin >> x;
		s.Push(x);
	}
	for(int i = 0 ; i< n; i ++)
	cout << s.Pop() << "  ";
	*/
	int a;
	cout << "Nhap a: ";
	cin >> a;
	stack <int> s(20);
	int count = 0;
	cout << a << "(10)" << " - ";
	while (a) {
		int t = a % 2;
		s.Push(t);
		count++;
		a = a / 2;
	}
	
	for (int i = 0; i < count; i++) {
		cout << s.Pop();
	}
	cout << "(2)";
	return 0;
}
