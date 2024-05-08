#include <iostream>
using namespace std;
int main() {
    int inputNumber;
    cout << "Enter an integer: ";
    cin >> inputNumber;

 
    int numberOfDigits = 0;
    int tempNumber = inputNumber;
    while (tempNumber != 0) {
        tempNumber /= 10;
        numberOfDigits++;
    }

    
    if (numberOfDigits == 5) {
        cout << "The number has exactly 5 digits." << endl;
    } else {
        cout << "The number does not have 5 digits." << endl;
    }

    return 0;
}
