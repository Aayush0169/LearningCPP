//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line

#include <iostream>
using namespace std;

int main()
 {

    int x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Enter the coordinates of the third point (x3, y3): ";
    cin >> x3 >> y3;


    if ((x2 - x1) * (y3 - y2) == (y2 - y1) * (x3 - x2)) 
    {
        cout << "All three points fall on the same line." << endl;
    }
     else
     {
        cout << "The three points do not fall on the same line." << endl;
    }

    return 0;
}
