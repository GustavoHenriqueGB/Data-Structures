#include <vector>
#include <iostream>

typedef int ItemType; // Define the type of items stored in the Stack

using namespace std;

struct Element
{
    ItemType data; // Stores the value of the current element
    Element* pnext; // Pointer that points to the next item of the Stack
};


class Dynamic_Stack // Definition of the Stack class
{    
    private:
        Element *peak; // Pointer that points the peak of the Stack

    public:
        Dynamic_Stack(); // Constructor
        ~Dynamic_Stack();  // Destructor
        bool isFull(); // Check if the Stack is full
        bool isEmpty(); // Check if the Stack is empty
        void push(ItemType item); // Add an item to the Stack
        ItemType pop(); // Remove an item from the Stack
        void print(); // Print the entire Stack
};
