#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    
    Queue queue1;
    ItemType item;
    int option;

    cout << "Queue Generator Program\n";
    do {
        cout << "Enter 0 to exit the program!\n";
        cout << "Enter 1 to push an element!\n";
        cout << "Enter 2 to pop an element!\n";
        cout << "Enter 3 to print the queue!\n";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Which item would you like to push onto the queue?\n";
                cin >> item;
                queue1.push(item);
                break;

            case 2:
                item = queue1.pop();
                cout << "Popped element: " << item << "\n";
                break;  

            case 3:
                queue1.print();
                break;  

            default:
                break;
        }
    } while (option != 0);
    
    cout << "Exiting the program!\n";

    return 0;
}
