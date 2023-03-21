#include<iostream>
using namespace std;

class Queue {
	enum{empty = -1, max_size = 10};
	int data[max_size];
	int front;
	int rear;
public:
	Queue() {
		front = rear = empty;
	}
	bool Is_empty()
	{
		return front = empty;
	}
	void Enqueue(int a) {
		if (Is_empty()) {
			front = 0;
		}
		++rear;
		data[rear] = a;
	}
	int Dequeue() {
		int v = data[front];
		++front;
		return v;
	}
	int peek() {
		return data[front];
	}
	int Count() {
		return rear - front + 1;
	}
	bool Is_full() {
		return rear = max_size - 1;
	}
};
