/*
this proggramme is for the  finding max element in an array
*/

#include <iostream>
using namespace std;
int main() {
    int arr[10];
    cout << "Enter elements in the array: ";

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int j = 1; j < 10; j++) {
        if (arr[j] > max) { 
            max = arr[j];
        }
    }

    cout << "The maximum number in this array is: " << max << endl;
    return 0;
}
