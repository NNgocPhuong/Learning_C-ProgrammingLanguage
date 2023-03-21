#include <iostream>
#define MAX 10

using namespace std;
template <class Type>
class List {
	Type* info;
	int n;
public:
	List(int _n = 0) {
		n = _n;
		info = new Type[n];
	}
	List(const List& L_)
	{
		n = L_.n;
		info = new Type[n];
	}
	/*bool IsEmpty()
	{
		return (n);
	}*/
	void Nhap() {
		cout << "Nhap n: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> info[i];
		}
	}
	/*bool IsFull()
	{
		if (n == MAX) return true;
		else return false;
	}*/
	void AddElement(List& L, Type K, int x) //x la vi tri can them vao
	{
		delete[]L.info;
		L.n = n+1;
		L.info = new Type[L.n];
		for (int i = 0; i < x; i++)
		{
			L.info[i] = info[i];
		}
		L.info[x] = K;
		for (int i = x + 1; i < n + 1; i++)
		{
			L.info[i] = info[i - 1];
		}
	}
	//Type PopElement(List& L, int x) //x la vi tri can lay ra
	//{
	//	if (IsEmpty(L)) return;
	//	else
	//	{
	//		Type tmp = info[x];
	//		for (int i = x - 1; i < L.n; i++)
	//		{
	//			info[i] = info[i + 1];
	//		}
	//		return tmp;
	//	}
	//}
	void display()
	{
		for (int i = 0; i < n; i++)
		{
			cout << info[i] << " ";
		}
	}
};
int main()
{
	List<int> L1, L2;
	L1.Nhap();
	L1.AddElement(L2, 7, 2);
	L2.display();
	return 0;
}
