/*Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]*/
#include <iostream>

using namespace std; 

int main() {
     int Students = 10; //number of studnets is 10
    int marks[Students]; 

//storing the marks if each students 
    cout << "Enter marks of " <<Students << " students:"<<endl;
    for (int i = 0; i <Students; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }

    //applying condition as per question
    cout << "Roll numbers of student's marks less than 35:"<<endl;
    for (int i = 0; i < Students; ++i) {
        if (marks[i] < 35) {

            cout << " Roll Number " << i  << endl;

        }
    }

    return 0;
}
