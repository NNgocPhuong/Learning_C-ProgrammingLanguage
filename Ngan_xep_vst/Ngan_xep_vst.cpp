#include <iostream>
#include"Header.h"
int main() {
    char text[100];
    std::cin.getline(text, 100);

    Stack s;
    for (char* p = text; *p; p++) {
        s.Push(*p);
    }
    while (!s.IsEmpty()) {
        std::cout << s.Pop();
    }
}