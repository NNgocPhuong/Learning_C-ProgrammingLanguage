#include<iostream>
#include<stack>
using namespace std;

// push : them phan tu vao ngan xep
// pop : xoa 1 phan tu cua ngan xep
// top : lay ra phan tu cho vao cuoi cung
// size : kich thuoc ngan xep
// empty : kiem tra xem ngan xep co rong hay khong

int main()
{
	stack <int> v;
	v.push(1);
	v.push(2);
	v.push(4);
	while (!v.empty()) {
		cout << v.top() << " ";
		v.pop();
	}
}