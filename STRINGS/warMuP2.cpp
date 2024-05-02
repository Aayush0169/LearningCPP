/*Given n strings consisting of lowercase
English alphabets. Print the character that is
occurring most number of times.*/


#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> strings(n);
    map<char, int> frequencyMap;

    // Read strings and count character frequencies
    for(int i = 0; i < n; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        cin >> strings[i];
        for(char c : strings[i]) {
            frequencyMap[c]++;
        }
    }

    char mostFrequentChar = 'a';
    int maxFrequency = 0;

    // Find the character with the highest frequency
    for(auto& pair : frequencyMap) {
        if(pair.second > maxFrequency || (pair.second == maxFrequency && pair.first < mostFrequentChar)) {
            mostFrequentChar = pair.first;
            maxFrequency = pair.second;
        }
    }

    cout << "The character that occurs the most number of times is: " << mostFrequentChar << endl;
    return 0;
}
