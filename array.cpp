#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements present in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "The elements in the array: " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    size_t size = sizeof(arr);
    cout << "Size: " << size << endl;
    cout << "Size of size_t: " << sizeof(size_t);
}