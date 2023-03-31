#include <iostream>
#include <algorithm>
using namespace std;

//basic approach:
/*int minElement(int arr[], int len) {
    int min = arr[0];
    for(int i = 1; i<len; i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
    }
    return min;
}

int maxElement(int arr[], int len) {
    int max = arr[0];
    for(int i = 1; i<len; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}
*/

//using in-built function
int minmaxElement(int arr[], int len) {
    sort(arr, arr+len); //#include <algorithm>
    int min = arr[0];
    int max = arr[len-1];
    cout << min << " ";
    cout << max;
}

int main() {
    int arr[] = {1, 2, -4, 5, -9, 10};
    
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Smallest & Largest element are: ";
    minmaxElement(arr, len);
    //cout << "Largest element: " << maxElement(arr, len);
}