#include <iostream>
using namespace std;

int main() {
    int input;
    cout<<"Enter the number of rows:"<<endl;
    cin>>input; 
    int vertical = input / 2; 

    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input; ++j) {

            
            if (i == vertical || j == vertical) {

                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }

    return 0;
}
