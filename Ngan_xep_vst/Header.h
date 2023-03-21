#pragma once
typedef char TVALUE;
class Stack {
    enum { EMPTY = -1, MAX_SIZE = 10 };

    TVALUE data[MAX_SIZE];    // vùng dữ liệu
    int top;        // vị trí đỉnh stack
public:
    Stack() {
        top = EMPTY;
    }
    void Push(TVALUE v) { data[++top] = v; }
    TVALUE Pop() { return data[top--]; }
    TVALUE Peek() { return data[top - 1]; }

    int Count() const { return top + 1; }
    bool IsEmpty() const { return top == EMPTY; }
    bool IsFull() const { return top == MAX_SIZE - 1; }
};