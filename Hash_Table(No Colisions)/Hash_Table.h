#include "Student.h"

typedef int ItemType;

class Hash{
    private:
        int HashFunction(Student);
        int max_itens;
        int max_positions;
        int length;
        Student* structure;

    public:
        Hash(int, int);
        ~Hash();
        bool isFull();
        int getLength();
        void push(Student);
        void pop(Student);
        void search(Student&, bool&);
        void print();
};