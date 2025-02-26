#include <iostream>

typedef int ItemType; // Define the type of items stored in the Stack
const int max_items = 100;

using namespace std;

class Stack // Definition of the Stack class
{
    private:
        ItemType* structure;
        int size;
    
    public:
        Stack(); // Constructor
        ~Stack();  // Destructor
        bool isFull(); // Check if the Stack is full
        bool isEmpty(); // Check if the Stack is empty
        void push(ItemType item); // Add an item to the Stack
        ItemType pop(); // Remove an item from the Stack
        void print(); // Print the entire Stack
};
