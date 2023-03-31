#include <iostream>
using namespace std;

int dectohex(int dec) {
    char hex[100];
    int i = 0;
    for(;dec!=0; dec=dec/16) {
        int rem = dec%16;
        if(rem>=0 && rem<=9) {
            hex[i] = rem + 48; //since in ascii table '0' is present at 48
        }
        else if(rem>=10 && rem<=15) {
            hex[i] = rem + 65 - 10;//since in ascii table 'A' is present at 65
        }
        i++;
    }
    for(int j = i; j>=0; j--) {
        cout << hex[j];
    }
}

int main() {
    int dec;
    cout << "Enter the decimal number: ";
    cin >> dec;
    dectohex(dec);
}