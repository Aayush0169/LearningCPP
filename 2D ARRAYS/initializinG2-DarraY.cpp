#include <iostream>
using namespace std;
int main() {
    int matrix[3][3];

    // Input elements of the matrix
    cout << "Enter the elements of the  matrix(3x3):\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "\nThe  matrix is:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
