//WAP to count digits of a given number
#include<iostream>
using namespace std;
int main () {
   int n;
    cout << "Enter any number: ";
    cin >> n;

    int count = 0;
    int temp = n; 

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    cout << "Number of digits in " << n << " is " << count << endl;
    return 0;   
}