/*Input a string of size n and Update all
the even positions in the string to character
‘a’. Consider 0-based indexing.*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    // Update even positions to 'a'
    for (int i = 0; i < inputString.length(); i += 2) {
        inputString[i] = 'a';
    }

    cout << "Updated string: " << inputString << endl;

    return 0;
}
