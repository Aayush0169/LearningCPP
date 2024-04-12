#include <iostream>
using namespace std;

int main() {
    // Assuming the maximum number of marks is 100
    const int MAX_MARKS = 100;
    const int NUM_STUDENTS = 4;
    
    // 2D array to store roll number and marks
    // First column for roll numbers, second column for marks
    int studentData[NUM_STUDENTS][2];
    
    // Input data from user
    for(int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> studentData[i][0];
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> studentData[i][1];
        
        // Validate marks
        if(studentData[i][1] < 0 || studentData[i][1] > MAX_MARKS) {
            cout << "Invalid marks! Please enter a value between 0 and " << MAX_MARKS << "." << endl;
            --i; // Decrement i to retake input for the same student
        }
    }
    
    // Display the matrix
    cout << "\nRoll Number\tMarks" << endl;
    for(int i = 0; i < NUM_STUDENTS; ++i) {
        cout << studentData[i][0] << "\t\t" << studentData[i][1] << endl;
    }
    
    return 0;
}
