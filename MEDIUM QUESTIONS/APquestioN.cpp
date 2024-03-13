//Display this AP - 100,97,94,..upto all terms which are positive. 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the terms you want to print the GP: ";
   cin >> n;
cout<<"the GP is:"<<endl;
    int gp = 100;
    for (int i = 0; i <= n; ++i) {
        if (gp > 0) {
            cout << gp << " ";
            gp -= 3;
        }
    }

    return 0;
}

