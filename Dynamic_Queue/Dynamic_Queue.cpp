#include <stddef.h>
#include<new>
#include "Dynamic_Queue.h"

using namespace std;

Dynamic_Queue::Dynamic_Queue() {
    first = NULL;
    last = NULL;
}

Dynamic_Queue::~Dynamic_Queue() {
    Element* auxElement;
    while (auxElement != NULL){
        auxElement = first;
        first = first->pnext;
        delete auxElement;
    }
    last = NULL;
}

bool Dynamic_Queue::isFull(){
    Element* newElement;
    try{
        newElement = new Element;
        delete newElement;
        return 0;
    }catch(bad_alloc exception){
        return 1;
    }
}

bool Dynamic_Queue::isEmpty() {
    return (first == NULL);
}

void Dynamic_Queue::push(ItemType item) {
    if(isFull()){
        cout << "The Queue is full\n";
    } else {
            Element* newElement = new Element;
            newElement->data = item;
            newElement->pnext = NULL;
        if(isEmpty()){
            first = newElement;
        }else{
            last->pnext = newElement;
        }
        last = newElement;
    }
}

ItemType Dynamic_Queue::pop() {
    if (isEmpty()) {
        cout << "The Queue is empty\n";
        return 0;
    } else {
        Element* auxElement = first;
        ItemType item = first->data;
        first = first->pnext;
        if(first == NULL){
            last = NULL;
        }
        delete auxElement;
        return item;
    }
}


void Dynamic_Queue::print() {
    Element* auxElement = first;
    cout << "Queue: [ ";
    while(auxElement != NULL){
        cout << auxElement->data << ' ';
        auxElement = auxElement->pnext;
    }
    cout << "]\n";
}
