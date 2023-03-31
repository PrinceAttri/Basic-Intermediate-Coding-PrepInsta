#include <iostream>
#include <cmath>
using namespace std;
/*
int main() {
    string n;
    cout << "Enter the octal number: ";
    cin >> n;

    cout << stoi(n, 0, 8);
}
*/

int main() {
    int n;
    cout << "Enter the octal number: ";
    cin >> n;
    int dec = 0;
    int i = 0;
    for(; n!=0; n/=10) {
        int rem = n%10;
        dec = dec + rem*pow(8, i);
        i++;
    }
    cout << "Decimal number is: " << dec;
}