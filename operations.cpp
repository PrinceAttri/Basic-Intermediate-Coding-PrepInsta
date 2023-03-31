#include <iostream>
#include <math.h>
using namespace std;

int addition(int a, int b) {
    int sum = a+b;
}

int subtraction(int a, int b) {
    int diff = a-b;
}

int multiplication(int a, int b) {
    int prod = a*b;
}

float division(float a, float b) {
    float quot = float(a/b);
    return quot;
}

int mod(int a, int b) {
    int rem = a%b;
}

int main() {
    float a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    cout << "Addition is: " << addition(a, b) << "\n";
    cout << "Subtraction is: " << subtraction(a, b) << "\n";
    cout << "Product is: " << multiplication(a, b) << "\n";
    cout << "Quotient is: " << division(a, b) << "\n";
    cout << "Remainder is: " << mod(a, b) << "\n";
}