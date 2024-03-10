//wap for the given number is a three digit number or not

#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a positive integer or number: ";
    cin >> num;

    // Check if the number is a three-digit number using the && operator
    if (num >= 100 && num <= 999) {
        cout << "The number " << num << " is a three-digit number." << endl;
        
    } else {
        cout << "The number " << num << " is not a three-digit number." << endl;
    }

    return 0;
}
