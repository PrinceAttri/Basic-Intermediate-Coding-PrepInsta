#include <iostream>
#include <cmath>
using namespace std;

int order(int n) {
    int len = 0;
    for(; n!=0; n = n/10) {
        len++;
    }
    return len;
}

bool isArmstrong(int n, int len) {
    int sum = 0;
    for(int temp = n; temp!=0; temp = temp/10) {
        int rem = temp%10;
        sum = sum + pow(rem, len);
    }
    cout << "sum: " << sum << endl;
    return (sum == n);
}

int main() {
    int n;
    cout << "Enter the num: ";
    cin >> n;

    int len = order(n);

    cout << "len: " << len << endl;
    cout << "num: " << n << endl;

    if(isArmstrong(n, len)) {
        cout << "Armstrong number!";
    }
    else {
        cout << "Not an armstrong number!";
    }
}

/*
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    int len = 0;
    for(int i = n; i!=0; i/=10) {
        len++;
    }
    for(int i = n; i!=0; i/=10) {
        int rem = i%10;
        sum = sum + pow(rem, len);
    }
    cout << "len: " << len << endl;
    cout << "n: " << n << endl;
    cout << "sum: " << sum << endl;
    if(sum == n) {
        cout << "Armstrong number!";
    }
    else {
        cout << "Not an amrstrong number!";
    }
}
*/