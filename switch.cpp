#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the option: ";
    cin >> ch;

    switch(ch) {
        case 'a':
            cout << "Option a is selected!";
            break;
        case 'b':
            cout << "Option b is selected!";
            break;
        case 'c':
            cout << "Option c is selected!";
            break;
        case 'd':
            cout << "Option d is selected!";
            break;
        default:
            cout << "Choose a valid option!";
            break;
    }
}

/*int main() {
    int a;
    cout << "Select an option: ";
    cin >> a;

    switch(a) {
        case 1:
            cout << "Option 1 selected!";
            break;
        case 2:
            cout << "Option 2 selected!";
            break;
        case 3:
            cout << "Option 3 selected!";
            break;
        case 4:
            cout << "Option 4 selected!";
            break;
        case 69:
            cout << "You are naughty!";
            break;
        default:
            cout << "Invalid selection!";
            break;
    }
}
*/