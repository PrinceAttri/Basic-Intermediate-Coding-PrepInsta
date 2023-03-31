#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 3, 2, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+len);
    int k = 3; //kth smallest number here is 3rd smallest number

    for(int i = 0; i<len; i++) {
        while(i<len-1 && arr[i] == arr[i+1]) {
            i++;
        }
        k--;
        if(k == 0) {
            cout << arr[i];
            break;
        }
    }
}