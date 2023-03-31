#include <iostream>
#include <climits>
using namespace std;

int secSmallest(int arr[], int len) {
    int smallest = INT_MAX;
    int sec_smallest = INT_MAX;
    for(int i = 0; i<len; i++) {
        if(arr[i]<smallest) {
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<sec_smallest) {
            sec_smallest = arr[i];
        }
    }
    if(sec_smallest == INT_MAX) {
        cout << "There is no second smallest number!";
    }
    else {
        cout << "Second smallest number is: " << sec_smallest;
    }
}

int main() {
    int arr[] = {1, 4, -9, 7, -6};
    int len = sizeof(arr)/sizeof(arr[0]);

    secSmallest(arr, len);
}