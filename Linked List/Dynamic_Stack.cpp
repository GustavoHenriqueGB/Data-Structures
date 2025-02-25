#include "Stack.h"

using namespace std;

Stack::Stack() {
    size = 0;
    structure = new ItemType[max_items];
}

Stack::~Stack() {
    delete[] structure;
}

bool Stack::isFull() {
    return (size == max_items);
}

bool Stack::isEmpty() {
    return (size == 0);
}

void Stack::push(ItemType item) {
    if (!isFull()) {
        cout << "The Stack is full\n";
    } else {
        structure[size] = item;
        size++;
    }    
}

void Stack::pop() {
    if (isEmpty()) {
        cout << "The Stack is empty\n";
    } else {
        size--;
        structure[size - 1]; 
    }
}

ItemType Stack::top() {
    return structure[size - 1];
}

int Stack::getSize() {
    return size;
}

void Stack::print() {
    cout << "Stack: [ ";
    for (int i = 0; i < size; i++) {
        cout << structure[i] << ' ';
    }
    cout << "]\n";
}
