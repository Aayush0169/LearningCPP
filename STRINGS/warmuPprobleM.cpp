/*Input a string and return the
number of times the neighbouring characters are
different from each other.*/

#include <iostream>
#include <string>

int countDifferentNeighbors(const std::string& str) {
    int count = 0;
    for (size_t i = 0; i < str.length() - 1; ++i) {
        if (str[i] != str[i + 1]) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    int result = countDifferentNeighbors(input);
    std::cout << "The number of times neighboring characters are different is: " << result << std::endl;

    return 0;
}
