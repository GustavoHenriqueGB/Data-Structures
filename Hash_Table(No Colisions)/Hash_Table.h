#include "Student.h"

class Hash{ // Definition of the Hash class
    private:
        int HashFunction(Student); // Hash function to compute the position of a student in the table
        int max_itens;
        int max_positions;
        int length;
        Student* structure;

    public:
        Hash(int, int); // Constructor
        ~Hash(); // Destructor
        bool isFull(); // Checks if the hash table is full
        int getLength();  // Returns the number of elements stored in the table
        void push(Student); // Inserts a student into the table
        void pop(Student); // Removes a student from the table
        void search(Student&, bool&); // Searches for a student in the table
        void print(); // Prints all students stored in the table
};