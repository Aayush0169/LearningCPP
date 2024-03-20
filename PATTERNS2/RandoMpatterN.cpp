/*
Print the following pattern
Input n = 4
Output:
*
**
***
****
***
**
*
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the height /length of pattern:";
    cin>>n;

    // Printing Upper half
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    //Printing Lower half
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
