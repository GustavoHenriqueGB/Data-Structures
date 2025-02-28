#include <iostream>

using namespace std;

class Student{
    private:
        int sr;
        string name;

    public:
        Student();
        Student(int, string);
        int getSr();
        string getName();

};