#include <iostream>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Function to calculate permutation: nPr = n! / (n - r)!
unsigned long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

// Function to calculate combination: nCr = n! / (r! * (n - r)!)
unsigned long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    std::cout << "Enter n and r for nPr and nCr calculation: ";
    std::cin >> n >> r;

    std::cout << "Permutation (nPr) of " << n << "P" << r << " is: " << permutation(n, r) << std::endl;
    std::cout << "Combination (nCr) of " << n << "C" << r << " is: " << combination(n, r) << std::endl;

    return 0;
}
