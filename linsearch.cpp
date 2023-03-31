#include <iostream>
using namespace std;

void linearSearch(int arr[], int a, int n) {
    for(int i = 0; i<n; i++) {
        if(arr[i] == a) {
            cout << "The number is present in the array at index: " << i;
            return;
        }
    }
    cout << "Number is not present";
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Array entered: ";
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int a;
    cout << "Enter the number to be searched: ";
    cin >> a;
    linearSearch(arr, a, n);
}