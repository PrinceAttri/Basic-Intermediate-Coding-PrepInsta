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
    return (sum == n);
}

int main() {
    int a,b;
    cout << "Enter the min and max value: ";
    cin >> a >> b;

    cout << "Armstrong numbers in given range are: ";

    for(int n = a; n<=b; n++) {
        int len = order(n);

        if(isArmstrong(n, len)) {
            cout << n << " ";
        }
    }
}