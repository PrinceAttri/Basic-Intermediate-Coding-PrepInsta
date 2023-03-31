#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double base;
    int exp;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponential power: ";
    cin >> exp;
    double result = 1;
    for(; exp !=0 ; exp--){
        result = result * base;
    }
    cout << fixed << setprecision(6) << result;
}

/* int main() {
    double base;
    int exp;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponential power: ";
    cin >> exp;
    double result = 1;
    for(int i = 1; i<=exp; i++) {
        result = result * base;
    }
    cout << result;
    //when we don't use in-built function we can't have decimal valued exponential power;
    //only integer valued exponential power possible
}
*/

/*int main() {
    double base;
    double exp;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponential power: ";
    cin >> exp;
    double result = pow(base, exp);
    cout << "The result is: " << fixed << setprecision(6) << result;
}
*/