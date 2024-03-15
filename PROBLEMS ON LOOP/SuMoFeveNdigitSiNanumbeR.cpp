/*
WAP to print the sum of all the even digits of a given number.
Sample Input : 4556
Output: 10 */
#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, digit;

    cout << "Enter a posetive number: ";
    cin >> num;


    while (num > 0) {
        digit = num % 10; 
        if (digit % 2 == 0) { 
            sum += digit;
        }
        num /= 10; 
    }

    cout << "Sum of even digits is: " << sum <<endl;

    return 0;
}