#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int n) {
    for(; n%2 == 0; n = n/2) {
        cout << "2" << " ";
    }
    for(int i = 3; i<=n; i = i+2) {
        while(n%i == 0) {
            cout << i << " ";
            n = n/i;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    isPrime(n);
}