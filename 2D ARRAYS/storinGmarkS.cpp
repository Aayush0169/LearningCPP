#include <iostream>
using namespace std;

int main() {

   
    int STUDENTS = 4;
    
   
    int studentData[STUDENTS][2];
    
    // Input data from user
    for(int i = 0; i < STUDENTS; ++i) {
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> studentData[i][0];
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> studentData[i][1];
    }
    
    // Display the matrix
    cout << "\nRoll Number\tMarks" << endl;
    for(int i = 0; i < STUDENTS; ++i) {
        cout << studentData[i][0] << "\t\t" << studentData[i][1] << endl;
    }
    
    return 0;
}
