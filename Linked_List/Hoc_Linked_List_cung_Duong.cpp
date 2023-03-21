#include<iostream>
using namespace std;

struct List_node {
	int data;
	int* next;
};
typedef List_node* node;
void create_node(node& p, int a) {
	p->data = a;
	p->next = nullptr;
}
struct List {
	List_node* pHead;
	List_node* pTail;
};
bool Is_empty(List* p){
	return p->pHead == nullptr;
}

void insert_first(List* p, int a)
{
	node* q = new node;
	create_node(q, a);
	if (Is_empty(p)) {
		p->pHead = p->pTail = q;
	}
	else {
		q->next = p->pHead;
	}
}
