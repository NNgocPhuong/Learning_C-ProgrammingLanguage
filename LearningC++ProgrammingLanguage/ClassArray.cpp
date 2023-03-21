#include "ClassArray.h"
#include<iostream>
using namespace std;
void Array::init(int size, const int* values) {
    data = new int[capacity = size];
    if (values) {
        for (int i = 0; i < size; i++) {
            data[i] = values[i];
        }
    }
}
int main()
{

}