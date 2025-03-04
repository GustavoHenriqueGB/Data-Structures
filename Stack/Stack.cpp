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

ItemType Stack::pop() {
    if (isEmpty()) {
        cout << "The Stack is empty\n";
        return 0;
    } else {
        size--;
        return structure[size + 1]; 
    }
}

void Stack::print() {
    cout << "Stack: [ ";
    for (int i = 0; i < size; i++) {
        cout << structure[i] << ' ';
    }
    cout << "]\n";
}
