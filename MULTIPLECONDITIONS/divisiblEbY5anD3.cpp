//wap for checking number divisible by 5 and 3
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a positive integer: ";
    cin >> a;

   
    if ((a % 5 == 0) && (a % 3 == 0)) {

        cout << "The number " << a << " is divisible by both 5 and 3." << endl;
    } else {
        
        cout << "The number " << a << " is not divisible by both 5 and 3." << endl;
    }

    return 0;
}
