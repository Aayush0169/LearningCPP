/* Input a string of even length and
reverse the first half of the string.*/
#include <iostream>
#include <string> // Include the string header

int main() {
    std::string input;
    std::cout << "Enter an even-length string: ";
    std::cin >> input;

    if(input.length() % 2 == 0) {
        // Manually reverse the first half of the string
        for(int i = 0; i < input.length() / 4; ++i) {
            std::swap(input[i], input[input.length() / 2 - i - 1]);
        }
        std::cout << "The modified string is: " << input << std::endl;
    } else {
        std::cout << "The input string is not of even length." << std::endl;
    }

    return 0;
}
