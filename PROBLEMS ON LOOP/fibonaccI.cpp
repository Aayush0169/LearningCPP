//Print the nth fibonacci number
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 0, b = 1, nextTerm;

    for (int i = 2; i <= n; ++i) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    cout << "The " << n << "th Fibonacci number is: " << b << endl;
    return 0;
}