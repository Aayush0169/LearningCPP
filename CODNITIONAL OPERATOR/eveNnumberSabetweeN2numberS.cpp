#include <iostream>
using namespace std;

int main() {
    int start, end;
    int evenCount = 0; // Initialize the count to zero

    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;

    if (start % 2 != 0) {
        start++;
    }

   
    cout << "Even numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start; i <= end; i += 2) {
        cout << i << " ";
        evenCount++; 
    }

    cout << "\nTotal even numbers: " << evenCount << endl;

    return 0;
}
