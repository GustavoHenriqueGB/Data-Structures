#include "Student.h"

Student::Student(){
    sr = -1;
    name = " ";
}

Student::Student(int s, string n){
    sr = s;
    name = n;
}

int Student::getSr(){
    return sr;
}

string Student::getName(){
    return name;
}