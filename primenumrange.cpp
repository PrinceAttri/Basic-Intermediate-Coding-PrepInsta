#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {
    if(n<=1) {
        return false;
    }
    else if(n==2) {
        return true;
    }
    else if(n%2 == 0) {
        return false;
    }
    else {
        for(int i = 3; i < sqrt(n) + 1; i+=2) {
            if(n%i == 0){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int a,b;
    cout << "Enter the low and high value: ";
    cin >> a >> b;
    cout << "Prime numbers in the given range are: " << endl;
    for(int n = a; n<=b; n++) {
        if(isPrime(n)) {
        cout << n << " ";
        }
    }
}