#include <iostream>
using namespace std;

void Table(int n) {
    for(int i = 1; i<=10; i++) {
        int prod = n*i;
        cout << n << " * " << i << " = " << prod << "\n"; 
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    Table(n);
}