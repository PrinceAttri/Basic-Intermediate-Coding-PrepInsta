#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void bubbleSort(int arr[], int len) {
    for(int i = 0; i<len-1; i++) {
        bool isSwapped = false;
        for(int j = 0; j<len-1-i; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        if(isSwapped == false) {
            break;
        }
    }
}

void display(int arr[], int len) {
    for(int i = 0; i<len; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[] = {4, 7, 5, 1, 2};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Before bubble sort: " ;
    display(arr, len);
    cout << endl;

    bubbleSort(arr, len);

    cout << "After bubble sort: ";
    display(arr, len);
}