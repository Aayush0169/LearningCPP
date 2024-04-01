/*Find the minimum value out of all elements in the array.*/
#include <iostream>
using namespace std;

int main() {
    int size=10;
    int arr[size],  i, smallest;

    

    cout << "Enter " << size << " Array Elements: ";
    for (i = 0; i < size; i++)
        cin >> arr[i];

    smallest = arr[0]; 

    for (i = 1; i < size; i++) {
        if (smallest > arr[i])
            smallest = arr[i]; 
    }

    cout << "Smallest Number = " << smallest << endl;
    return 0;
}
