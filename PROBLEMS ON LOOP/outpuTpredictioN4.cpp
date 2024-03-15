//Predict the output

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int t = 10;        
while (t /= 2) {       
cout << "Hello" << endl;
}
return 0;
}
/*
The word “Hello” is displayed on the screen.
Divide t by 2: The current value of t (which is 5) is divided by 2, resulting in 2. This new value is stored back in t.

then:-The program goes back to loop because 't' is still not equal to 0.
it will print hello.

now..
The current value of t (which is now 1) is divided by 2, resulting in 0 (integer division). This new value is stored in 't'
now 't' will become 0, and loop will be exited.

so it will print "hello" 
three times
*/