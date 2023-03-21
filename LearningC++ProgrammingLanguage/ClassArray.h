#pragma once

class Array {
    int* data;    // mảng cấp phát động
    int capacity; // số phần tử

    void init(int size, const int* values);
    void dispose() {
        if (data) delete[] data;
    }

public:
    ~Array() { dispose(); }

    Array() : data(0), capacity(0) { }
    Array(int capacity, const int* source = 0) {
        init(capacity, source);
    }
    Array(const Array& source) : data(0) {
        init(source.capacity, source.data);
    }

public:
    int Length() const { return capacity; }

public:
    int GetElement(int index) const { return data[index]; }
    void SetElement(int index, int value) { data[index] = value; }

public:
    Array& operator=(const Array& source) {
        dispose();
        init(source.capacity, source.data);

        return *this;
    }
};
