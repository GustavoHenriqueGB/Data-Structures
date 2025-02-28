#include <iostream>
#include "Hash_Table.h"

using namespace std;

int main() {
    cout << "Hash generator Program!\n";
    int length_vector, max;
    cout << "Enter the Hash size!\n";
    cin >> length_vector;
    cout << "Enter the maximum number of students!\n";
    cin >> max;
    cout << "Load Factor = " << (float)max / (float)length_vector << endl;

    Hash studentsHash(length_vector, max);
    int sr, option;
    string name;
    bool search;

    do {
        cout << "Enter 0 to exit the program!\n";
        cout << "Enter 1 to push an student!\n";
        cout << "Enter 2 to pop an student!\n";
        cout << "Enter 3 to search an student!\n";
        cout << "Enter 4 to print the Hash Table!\n";
        cin >> option;

        switch (option) {
            case 1: {
                cout << "Enter the student register!\n";
                cin >> sr;
                cout << "Enter the student name!\n";
                cin >> name;
                Student student1(sr, name);
                studentsHash.push(student1);
                break;
            }

            case 2: {
                cout << "Which student register is to be removed?\n";
                cin >> sr;
                Student student1(sr, " ");
                studentsHash.pop(student1);
                break;
            }  

            case 3: {
                cout << "Which student register is to be searched?\n";
                cin >> sr;
                Student student1(sr, " ");
                studentsHash.search(student1, search);
                if(search){
                    cout << "Student found!\n";
                    cout << "SR: " << sr << endl;
                    cout << "Name: " << student1.getName() << endl;
                } else{
                    cout << "Student not foud!\n";
                }
                break;  
            }

            case 4: {
                studentsHash.print();
                break;  
            }
            default:
                break;
        }
    } while (option != 0);
    
    cout << "Exiting the program!\n";
    return 0;
}