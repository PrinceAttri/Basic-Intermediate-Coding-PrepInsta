#include <iostream>
using namespace std;

void hcf(int a, int b) {
    int h = 1;
    for(int i = 2; i<=a; i++) {
        if(a%i == 0 && b%i == 0) {
            h = i;
        }
    }
    cout << h;
}

int main() {
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;

    hcf(a, b);
}