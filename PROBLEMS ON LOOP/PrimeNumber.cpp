//WAP to check if a number is prime or not (use of break statement)
#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;

    cout << "Enter a positive number you want to check: ";
    cin >> n;

    if (n == 0 || n == 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break; 
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";

    return 0;
}
