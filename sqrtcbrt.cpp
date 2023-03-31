#include <iostream>
#include <cmath>
using namespace std;

double Sqrt(int x) {
    double sq = sqrt(x);
    return sq;
}

double Cbrt(int x) {
    double cb = cbrt(x);
    return cb;
}

int main() {
    int a = 50;
    int b = 10;
    cout << Sqrt(a) << "\n";
    cout << Cbrt(b);
}