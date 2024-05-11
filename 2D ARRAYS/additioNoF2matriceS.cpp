#include <iostream>
using namespace std;

int main() {
    int row, col, i, j;
    // Ask for the dimensions of the matrices
    
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    // Declare the two matrices and the result matrix
    int m1[10][10], m2[10][10], sum[10][10];

    // Input elements for the first matrix

    
    cout << "Enter the elements of the first matrix: "<<endl;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            cout << "Enter element m1[" << i << "][" << j << "]: ";
            cin >> m1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter the elements of the second matrix: "<<endl;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            cout << "Enter element m2[" << i << "][" << j << "]: ";
            cin >> m2[i][j];
        }
    }

    // Adding two matrices
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // Displaying the result
    cout << "Sum of the two matrices: "<<endl;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
