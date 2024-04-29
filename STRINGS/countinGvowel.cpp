#include <iostream>
#include <string>

using namespace std;

int countVowels(const string& str) {
    int vowelCount = 0;
    string vowelsLower = "aeiou";
    string vowelsUpper = "AEIOU";

    for (char ch : str) {
        if (vowelsLower.find(ch) != string::npos || vowelsUpper.find(ch) != string::npos) {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    string inputStr;
    int n; // User-defined string length

    cout << "Enter a string: ";
    getline(cin, inputStr);

    cout << "Enter the desired string length: ";
    cin >> n;

    if (inputStr.length() != n) {
        cout << "The entered string does not have length " << n << "." << endl;
        return 1;
    }

    int vowelCount = countVowels(inputStr);
    cout << "The string has " << vowelCount << " vowels." << endl;

    return 0;
}

