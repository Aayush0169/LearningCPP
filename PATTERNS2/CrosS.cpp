//PRINT THE STAR CROSS PATTERN
#include <iostream>
using namespace std;

int main() {
    int input; 
    cout<<"Enter the length of the cross(should be an odd number for better result):"<<endl;
    cin>>input;
    // Size of the cross pattern, should be an odd number
    int mid = input / 2; // Middle index for the cross

    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input; ++j) {
            // Print '*' only at the diagonals
            if (i == j || i + j == input - 1) {
                cout << "* ";
            } else {
                cout << "  "; // Print spaces elsewhere
            }
        }
        cout <<endl; // Newline after each row
    }

    return 0;
}
