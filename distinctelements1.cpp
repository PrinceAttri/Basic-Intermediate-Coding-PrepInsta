#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 3, 2, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    int count_distinct = 0;
    
    for(int i = 0; i<len; i++) {
        int flag = 0;
        for(int j = i+1; j<len; j++) {
            if(arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            count_distinct++;
        }
    }
    cout << count_distinct;
}