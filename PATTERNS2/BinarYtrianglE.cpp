//Print the given pattern(BINARY TRIANGLE)
#include <iostream>
using namespace std;
int main() {
    int input;
    cout << "Enter the number of rows : ";
    cin >> input;

    int value = 1;
    for(int i = 0; i <= input; ++i) {
        for(int j = 0; j <= i; ++j) {
            cout << value << " ";
            value = !value; 
        }
        if(i % 2 == 0) {
            value = 1;
        } else { 
            value = 0;
        }
        cout << endl;
    }
    return 0;
}
