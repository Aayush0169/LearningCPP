/*
Print the following pattern
Input: n = 4
Output:
A
A B
A B C
A B C D
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; ++i) {
        char patt= 'A';
        for(int j = 0; j <= i; ++j) {
            cout <<patt << " ";
            ++patt;
        }
        cout << endl;
    }
    return 0;
}
