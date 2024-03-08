//calculating precentage of 5 subjects
#include<iostream>
using namespace std;
int main()
{

    int marks[5];
    float sum = 0, avg, percentage;

    cout << "Enter Marks obtained in each subjects  ";
    for (int i = 1; i <= 5; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    avg = sum / 5;
    percentage = (sum / 500) * 100;

    cout << "average marks is = " << avg<<endl;
    cout << "precentage of marks = " << percentage << "%";
    cout << endl;

    return 0;
}