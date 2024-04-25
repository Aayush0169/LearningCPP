/*
Write a program to print sum of all the 
elements of a 2D matrix.
*/
#include <iostream>
#include <vector>
using namespace std;


int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements in the matrix is: " << sum << endl;
    return 0;
}
