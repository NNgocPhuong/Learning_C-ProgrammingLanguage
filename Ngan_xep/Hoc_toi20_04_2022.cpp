#include<iostream>

using namespace std;

#define empty -1;
#define Max_size 20;

class Stack {
	int top;
	int size;
	int* data;
public:
	Stack(int k = 0){
		size = k;
		top = empty;
		data = new int[size];
	}
	void Push(int v) {
		size++;
		data[++top] = v;
	}
	int Pop() {
		size--;
		return data[top--];
	}
	bool Is_empty() {
		return size == 0;
	}
	bool Is_ful() {
		return size == Max_size;
	}
};

int main()
{
	int a;
	Stack s;
	cout << "Nhap so a: ";
	cin >> a;
	while (a) {
		int b = a % 2;
		s.Push(b);
		a = a / 2;
	}
	while (!s.Is_empty()) {
		cout << s.Pop();
	}
	return 0;
}
