//wap for finding whether the input is an alphabet or not
#include <iostream>
using namespace std;

int main() {
    char in;
    cout << "Enter a character: ";
    cin >> in;

    if ((in >= 'a' && in <= 'z') || (in >= 'A' && in <= 'Z')) {
        cout << in << " is an alphabet." << endl;
    } else {
        cout << in<< " is not an alphabet." << endl;
    }

    return 0;
}
