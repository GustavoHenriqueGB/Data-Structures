#include <iostream>

typedef int ItemType; // Define the type of items stored in the Queue

using namespace std;

struct Element
{
    ItemType data; // Stores the value of the current element
    Element* pnext; // Pointer that points to the next item of the Queue
};


class Dynamic_Queue // Definition of the Queue class
{    
    private:
        Element* first; // Pointer that points the first item of the Queue
        Element* last; // Poiter that points the last item of the Queue

    public:
        Dynamic_Queue(); // Constructor
        ~Dynamic_Queue();  // Destructor
        bool isFull(); // Check if the Queue is full
        bool isEmpty(); // Check if the Queue is empty
        void push(ItemType); // Add an item to the Queue
        ItemType pop(); // Remove an item from the Queue
        void print(); // Print the entire Queue
};
