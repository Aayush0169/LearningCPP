/*Given two strings s and t, return true if t is an
anagram of s, and false otherwise.*/

#include <iostream>
#include <algorithm> // for std::sort

bool isAnagram(std::string s, std::string t) {
    if (s.length() != t.length()) {
        return false;
    }
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    return s == t;
}

int main() {
    std::string s = "listen";
    std::string t = "silent";
    
    if (isAnagram(s, t)) {
        std::cout << "True: '" << t << "' is an anagram of '" << s << "'.\n";
    } else {
        std::cout << "False: '" << t << "' is not an anagram of '" << s << "'.\n";
    }
    
    return 0;
}
