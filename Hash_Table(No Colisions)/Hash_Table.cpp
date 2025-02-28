#include <iostream>
#include "Hash_Table.h"

using namespace std;

int Hash::HashFunction(Student student){
    return (student.getSr() % max_positions);
}

Hash::Hash(int length_vector, int max){
    length = 0;
    max_itens = max;
    max_positions = length_vector;
    structure = new Student[length_vector];
}

Hash::~Hash(){
    delete[] structure;
}

bool Hash::isFull(){
    return (length == max_itens);
}

int Hash::getLength(){
    return length;
}

void Hash::push(Student student){
    int location = HashFunction(student);
    structure[location] = student;
    length++;
}

void Hash::pop(Student student){
    int location = HashFunction(student);
    if(structure[location].getSr() != -1){
        structure[location] = Student(-1, " ");
        length--;
    }
}

void Hash::search(Student& student, bool& search){
    int location = HashFunction(student);
    Student aux = structure[location];
    if(student.getSr() != aux.getSr()){
        search = 0;
    } else {
        search = 1;
        student = aux;
    }
}

void Hash::print(){
    cout << "Hash Table: \n";
    for(int i = 0; i < max_positions; i++){
        if(structure[i].getSr() != -1){
            cout << i << ": " << structure[i].getSr() << ", " << structure[i].getName() << endl;
        }
    }
}

