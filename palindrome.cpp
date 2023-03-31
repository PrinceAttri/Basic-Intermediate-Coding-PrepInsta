#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int revnum = 0;
    for(int n = num; n!=0; n /= 10) {
        int rem = n %10;
        revnum = revnum*10 + rem;
    }
    cout << "Reverse num: " << revnum << endl;
    if(num == revnum) {
        cout << "Palindrome num!";
    }
    else {
        cout << "Not a palindrome num!";
    }
}