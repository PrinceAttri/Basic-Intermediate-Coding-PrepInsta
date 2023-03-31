#include <iostream>
using namespace std;

int main() {
    int m, n, i, j;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;
    int arr[m][n];
    int sum_left = 0;
    int sum_right = 0;

    cout << "Enter the elements of the matrix: ";

    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin >> arr[i][j];
            if(i==j) {
                sum_left = sum_left + arr[i][j];
            }
            if(i+j == m-1) {
                sum_right = sum_right + arr[i][j];
            }
        }
    }
    
    cout << "Elements of the given matrix: " << endl;
    
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of left diagonal elements: " << sum_left << endl;
    cout << "Sum of right diagonal elements: " << sum_right;
}