#include <vector>
#include <iostream>

typedef int ItemType; // Define the type of items stored in the Queue
const int max_items = 100;

using namespace std;

class Queue // Definition of the Queue class
{
    private:
        ItemType* structure;
        int first, last;
    
    public:
        Queue(); // Constructor
        ~Queue();  // Destructor
        bool isFull(); // Check if the Queue is full
        bool isEmpty(); // Check if the Queue is empty
        void push(ItemType item); // Add an item to the Queue
        ItemType pop(); // Remove an item from the Queue
        void print(); // Print the entire Queue
};
