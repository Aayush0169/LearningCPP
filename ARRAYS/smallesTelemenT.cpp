/*Find the minimum value out of all elements in the array.*/
#include <iostream>
using namespace std;

int main() {
    int size=10;
    int arr[size],  i, s;

    

    cout << "Enter " << size << " Array Elements: ";
    for (i = 0; i < size; i++)
        cin >> arr[i];

    s = arr[0]; // Assume the first element is the smallest

    for (i = 1; i < size; i++) {
        if (s > arr[i])
            s = arr[i]; // Update s if a smaller element is found
    }

    cout << "\nSmallest Number = " << s << endl;
    return 0;
}
