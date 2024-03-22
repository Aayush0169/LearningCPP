/* Given two numbers a and b, write a 
function to print all odd numbers between them.*/
#include <iostream>
using namespace std;

void OddNumbers(int a, int b) {
    if (a % 2 == 0) {
        a++;
    }
   
    for (int i = a; i <= b; i += 2) {
        cout << i << " ";
    }
}


int main() {
    int a, b;
    cout << "Enter two numbers (second number shuold be greater than first): ";
    cin >> a >> b;
    cout << "Odd numbers between " << a << " and " << b << " are: ";
    OddNumbers(a, b);
    cout << endl;
    return 0;
}
