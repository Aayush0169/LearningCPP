/*
Write a program to print the transpose of 
the matrix entered by the user and store it in a new 
matrix. */

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Initialize the original matrix
    int matrix[rows][cols];

    // Get the matrix elements from the user
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Initialize the transpose matrix
    int transpose[cols][rows];

    // Calculate the transpose of the matrix
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose matrix
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
