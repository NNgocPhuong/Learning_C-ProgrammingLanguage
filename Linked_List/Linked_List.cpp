#include<iostream>
using namespace std;

class ListNode
{
public:
	int infor;
	ListNode* next;
	ListNode(int _infor)
	{
		infor = _infor;
		next = NULL;
	}
};

class List
{
	ListNode* head;
	ListNode* tail;
public:
	List() {
		head = tail = 0;
	}
	~List() {

	}
	bool Is_empty()
	{
		return head == 0;
	}
	void insert_head(int infor)
	{
		ListNode* p = new ListNode(infor);
		if (Is_empty()) {
			head = tail = p;
		}
		else {
			p->next = head;
		}
		head = p;
	}
	void insert_tail(int infor)
	{
		ListNode* p = new ListNode(infor);
			if (Is_empty())
			{
				head = tail = p;
			}
			else {
				tail->next = p;
			}
			tail = p;
	}
};
