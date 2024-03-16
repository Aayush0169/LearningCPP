//WAP to print sum of digits of a given number.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number of your choice: ";
    cin >> n;

    int sum = 0;
    int temp = n; 

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    cout << "Sum of digits in " << n << " is " << sum << endl;
    return 0;
}
