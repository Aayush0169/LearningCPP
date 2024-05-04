/*Input n strings and write a program to find
the longest common prefix string of all the strings.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string findLongestCommonPrefix(const vector<string>& strs) {
    if (strs.empty()) return "";

    // Sort the strings
    vector<string> sortedStrs = strs;
    sort(sortedStrs.begin(), sortedStrs.end());

    string first = sortedStrs[0];
    string last = sortedStrs.back(); // Using back() to get the last element
    int i = 0;

    // Compare the characters until they are the same
    while (i < first.length() && i < last.length() && first[i] == last[i]) {
        i++;
    }

    // Return the common prefix
    return first.substr(0, i);
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore(); // Ignore the newline left in the input stream

    vector<string> strs;
    string temp;
    cout << "Enter the strings, press ENTER after each string:\n";
    for (int i = 0; i < n; ++i) {
        getline(cin, temp); // Use getline to include spaces
        strs.push_back(temp);
    }

    string longestCommonPrefix = findLongestCommonPrefix(strs);
    cout << "The longest common prefix is: " << longestCommonPrefix << endl;

    return 0;
}
