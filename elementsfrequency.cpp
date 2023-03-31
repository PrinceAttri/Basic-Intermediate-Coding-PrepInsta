#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 3, 2, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+len);

    for(int i = 0; i<len; i++) {
        int count = 1;
        while(i<len-1 && arr[i] == arr[i+1]) {
            count++;
            i++;
        }
        cout << arr[i] << " element frequency: " << count << endl;
    }
}