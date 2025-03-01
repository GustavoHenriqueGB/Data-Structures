#include <iostream>

using namespace std;
 
class Student{ // Definition of the Student Class
    private:
        int sr;
        string name;

    public:
        Student(); // Constructor
        Student(int, string); // Parametric Constructor
        int getSr(); // Returns the student registration number
        string getName(); // Returns the student name

};