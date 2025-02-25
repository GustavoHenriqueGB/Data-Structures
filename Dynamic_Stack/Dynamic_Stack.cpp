#include "Dynamic_Stack.h"
#include <stddef.h>

using namespace std;

Dynamic_Stack::Dynamic_Stack() {
    peak = NULL;
}

Dynamic_Stack::~Dynamic_Stack() {
    Element* auxElement;
    while (auxElement != NULL){
        auxElement = peak;
        peak = peak->pnext;
        delete auxElement;
    }
    
}

bool Dynamic_Stack::isFull(){
    Element* newElement;
    try{
        newElement = new Element;
        delete newElement;
        return 0;
    }catch(bad_alloc exception){
        return 1;
    }
}

bool Dynamic_Stack::isEmpty() {
    return (peak == NULL);
}

void Dynamic_Stack::push(ItemType item) {
    if(isFull()){
        cout << "The Stack is full\n";
    } else {
        Element* newElement = new Element;
        newElement->data = item;
        newElement->pnext = peak;
        peak = newElement;
    }
}

ItemType Dynamic_Stack::pop() {
    if (isEmpty()) {
        cout << "The Stack is empty\n";
        return 0;
    } else {
        Element* auxElement;
        auxElement = peak;
        ItemType item = peak->data;
        peak = peak->pnext;
        delete auxElement;
        return item;
    }
}


void Dynamic_Stack::print() {
    Element* auxElement = peak;
    cout << "Stack: [ ";
    while(auxElement != NULL){
        cout << auxElement->data << ' ';
        auxElement = auxElement->pnext;
    }
    cout << "]\n";
}
