#include "Queue.h"

using namespace std;

Queue::Queue() {
    first = 0;
    last = 0;
    structure = new ItemType[max_items];
}

Queue::~Queue() {
    delete[] structure;
}

bool Queue::isFull() {
    return (last - first == max_items);
}

bool Queue::isEmpty() {
    return (first == last);
}

void Queue::push(ItemType item) {
    if (isFull()) {
        cout << "The Queue is full\n";
    } else {
        structure[last % max_items] = item;
        last++;
    }    
}

ItemType Queue::pop() {
    if (isEmpty()) {
        cout << "The Queue is empty\n";
        return 0;
    } else {
        first++;
        return structure[(first - 1) % max_items];
    }
}

void Queue::print() {
    cout << "Queue: [ ";
    for (int i = first; i < last; i++) {
        cout << structure[i % max_items] << ' ';
    }
    cout << "]\n";
}
