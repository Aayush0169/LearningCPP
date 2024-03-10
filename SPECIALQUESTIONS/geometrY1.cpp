//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the coordinates of the points (x, y): ";
    cin >> x >> y;


    if (x == 0 && y == 0) {
        cout << "The point (" << x << ", " << y << ") lies at the origin." << endl;
    } 

    else if (x == 0 && y != 0) {

        cout << "The point (" << x << ", " << y << ") lies on the y-axis." << endl;

    } 
    
    else if (y == 0 && x != 0) {
        cout << "The point (" << x << ", " << y << ") lies on the x-axis." << endl;
    }
    
     else {
        cout << "The point (" << x << ", " << y << ") does not lie on the x-axis, y-axis, or at the origin." << endl;
    }

    return 0;
}