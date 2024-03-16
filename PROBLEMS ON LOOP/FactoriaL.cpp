//Print the factorial of a given number ‘n’
#include <iostream>
using namespace std;

int main() {
    int n;
   int  factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid Input.";
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}
