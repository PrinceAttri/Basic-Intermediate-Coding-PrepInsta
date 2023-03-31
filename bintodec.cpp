#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the binary number: ";
    cin >> n;
    int dec = 0;
    int i = 0;
    for(; n!=0; n = n/10) {
        int rem = n%10;
        dec = dec + rem*pow(2, i);
        i++;
    }
    cout << dec;
}