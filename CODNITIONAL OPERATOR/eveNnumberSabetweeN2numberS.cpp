#include <iostream>
using namespace std;

int main() {
    int start, end;
    int evenCount = 0; // Initialize the count to zero

    // Input the start and end values
    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;

    // Adjust start number if it is odd
    if (start % 2 != 0) {
        start++;
    }

    // Print even numbers in the range and update the count
    cout << "Even numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start; i <= end; i += 2) {
        cout << i << " ";
        evenCount++; // Increment the count
    }

    // Print the total count
    cout << "\nTotal even numbers: " << evenCount << endl;

    return 0;
}
