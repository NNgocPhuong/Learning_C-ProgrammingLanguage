#include<iostream>
using namespace std;

template<class T>
class listNode {
public:
	T data;
	listNode* next;
	listNode(T _data = 0)
	{
		data = _data;
		next = NULL;
	}
};

template<class T>
class list {
	listNode<T>* head;
	listNode<T>* tail;
public:
	list() {
		head = NULL;
		tail = NULL;
	}
	~list(){}
	bool Is_empty() {
		return head == NULL;
	}
	void insert_first(T a) {
		listNode<T>* p = new listNode<T>(a);
		if (Is_empty()) {
			tail = p;
		}
		else {
			p->next = head;
		}
		head = p;
	}
	void insert_last(T a) {
		listNode<T>* p = new listNode<T>(a);
		if (Is_empty()) {
			head = p;
		}
		else {
			tail->next = p;
		}
		tail = p;
	}
	void xuat_list()
	{
		for (listNode<T>* k = head; k != NULL; k = k->next)
		{
			cout << k->data << "  ";
		}
	}
	void Traversal(void(* callBack)(T)) {
		listNode<T>* p = head;
		while (p) {
			callBack(p->data);
			p = p->next;
		}
	}
};

int main()
{
	int n;
	cout << "Nhap so phan tu cua node: ";
	cin >> n;
	list<int> l;
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		l.insert_last(a);
	}
	cout << "xuat danh sach: " << endl;
	l.xuat_list();
}
