/*Given two strings s and t, determine if
they are isomorphic.*/
#include <iostream>
#include <unordered_map>
#include <unordered_set>

bool isIsomorphic(const std::string& s, const std::string& t) {
  if (s.length() != t.length()) {
    return false;
  }

  // Use a hash map to store the mapping between characters in s and t
  std::unordered_map<char, char> char_map;
  // Use a set to keep track of characters seen in t
  std::unordered_set<char> seen_in_t;
  for (int i = 0; i < s.length(); ++i) {
    char char_s = s[i];
    char char_t = t[i];

    if (char_map.count(char_s)) {
      // If the character in s has already been mapped, check if the mapping is consistent
      if (char_map[char_s] != char_t) {
        return false;
      }
    } else {
      // If the character in s is not mapped yet, check if the character in t has already been seen
      if (seen_in_t.count(char_t)) {
        return false;
      }
      char_map[char_s] = char_t;
      seen_in_t.insert(char_t);
    }
  }

  return true;
}

int main() {
  std::string s1 = "egg";
  std::string t1 = "add";
  std::cout << s1 << " and " << t1 << " are isomorphic: " << isIsomorphic(s1, t1) << std::endl;

  std::string s2 = "foo";
  std::string t2 = "bar";
  std::cout << s2 << " and " << t2 << " are isomorphic: " << isIsomorphic(s2, t2) << std::endl;

  std::string s3 = "paper";
  std::string t3 = "title";
  std::cout << s3 << " and " << t3 << " are isomorphic: " << isIsomorphic(s3, t3) << std::endl;

  return 0;
}
#include <iostream>
#include <unordered_map>
#include <unordered_set>

bool isIsomorphic(const std::string& s, const std::string& t) {
  if (s.length() != t.length()) {
    return false;
  }

  // Use a hash map to store the mapping between characters in s and t
  std::unordered_map<char, char> char_map;
  // Use a set to keep track of characters seen in t
  std::unordered_set<char> seen_in_t;
  for (int i = 0; i < s.length(); ++i) {
    char char_s = s[i];
    char char_t = t[i];

    if (char_map.count(char_s)) {
      // If the character in s has already been mapped, check if the mapping is consistent
      if (char_map[char_s] != char_t) {
        return false;
      }
    } else {
      // If the character in s is not mapped yet, check if the character in t has already been seen
      if (seen_in_t.count(char_t)) {
        return false;
      }
      char_map[char_s] = char_t;
      seen_in_t.insert(char_t);
    }
  }

  return true;
}

int main() {
  std::string s1 = "egg";
  std::string t1 = "add";
  std::cout << s1 << " and " << t1 << " are isomorphic: " << isIsomorphic(s1, t1) << std::endl;

  std::string s2 = "foo";
  std::string t2 = "bar";
  std::cout << s2 << " and " << t2 << " are isomorphic: " << isIsomorphic(s2, t2) << std::endl;

  std::string s3 = "paper";
  std::string t3 = "title";
  std::cout << s3 << " and " << t3 << " are isomorphic: " << isIsomorphic(s3, t3) << std::endl;

  return 0;
}
