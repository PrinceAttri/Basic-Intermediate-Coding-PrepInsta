#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 3, 2, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    int count_distinct = 0;
    int visited[len] = {0}; //gives every element 0 value as they are unvisited in starting

    for(int i = 0; i<len; i++) {
        if(visited[i] == 0) {
            for(int j = i+1; j<len; j++) {
                if(arr[i] == arr[j]) {
                    visited[j] = 1;
                }
            }
            count_distinct++;
        }
    }
    cout << "Visited Array is: ";
    for(int i = 0; i<len; i++) {
        cout << visited[i] << " ";
    }
    cout << endl;
    
    cout << "Number of distinct elements: " << count_distinct;
}