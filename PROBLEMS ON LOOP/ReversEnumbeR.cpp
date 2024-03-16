//WAP to print reverse of a given number.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reverse = 0;
    int temp = n; 

    while (temp > 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    cout << "Reverse of " << n << " is " << reverse << endl;
    return 0;
}
