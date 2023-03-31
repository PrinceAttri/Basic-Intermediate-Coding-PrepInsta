#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the start and end values: ";
    cin >> a >> b;
    for(;a<=b; a++) {
        cout << a << endl;
        if(a%13 == 0) {
            break;
        }
    }
}