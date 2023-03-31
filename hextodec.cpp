#include <iostream>
#include <cmath>
using namespace std;

int hextodec(string hex) {
    int dec = 0;
    int len = hex.size();
    int pos = 0;
    for(int i = len-1; i>=0; i--) {
        if(hex[i]>='0' && hex[i] <= '9') {
            int digit = int(hex[i]) - 48; //in ascii table '0' is at 48
            dec = dec + digit*pow(16, pos);
            pos++;
        }
        else if(hex[i]>= 'A' && hex[i] <= 'F') {
            int digit = int(hex[i]) - 65 + 10;
            //in ascii table 'A' is at 65, so we need to subtract 65 but add 10 since in hexadecimal A = 10 and not 0;
            dec = dec + digit*pow(16, pos);
            pos++;
        }
    }
    cout << "Decimal value is: " << dec;
}

int main() {
    string hex;
    cout << "Enter the hexadecimal number: ";
    cin >> hex;
    hextodec(hex);
}