#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    int max = (a > b)? a:b;
    
    for(int i = max; i <= a*b; i = i+max) {
        if(i%a == 0 && i%b == 0) {
            cout << "LCM is: " << i;
            break;
        }
    }
}