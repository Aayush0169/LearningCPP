/*Write a function to count the number 
of digits in a number and then print the square of this number.*/
#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10; 
        ++count;
    }
    return count;
}

int square(int number) {
    return number * number;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int digitCount = countDigits(number);
    cout << "The number of digits in " << number << " is " << digitCount << endl;
    cout << "The square of the digit count is " << square(digitCount) << endl;

    return 0;
}
