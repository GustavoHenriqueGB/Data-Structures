#include <iostream>
#include "Dynamic_Stack.h"

using namespace std;

int main() {
    
    Dynamic_Stack stack1;
    ItemType item;
    int option;

    cout << "Stack Generator Program\n";
    do {
        cout << "Enter 0 to exit the program!\n";
        cout << "Enter 1 to push an element!\n";
        cout << "Enter 2 to pop an element!\n";
        cout << "Enter 3 to print the stack!\n";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Which item would you like to push onto the stack?\n";
                cin >> item;
                stack1.push(item);
                break;

            case 2:
                item = stack1.pop();
                cout << "Popped element: " << item << "\n";
                break;  

            case 3:
                stack1.print();
                break;  

            default:
                break;
        }
    } while (option != 0);
    
    cout << "Exiting the program!\n";

    return 0;
}
