//What is the output of this program?
#include<iostream>
using namespace std;
int main() {
int a = 4;
int b = 5;
a++, b--;
cout << ++a<<endl<< b--;
return 0;
}

/*++a is a pre-increment operation on a. It increments the value of a by 1 and returns the updated value (which is now 5).

now in cout statment ++a (pre increment) the value of a (which is 5 ) will increment and it'll become 6 output will be :6 ;

b-- decrements the value of b by 1, but the result of this expression is the original value of b (which is 5).

now in cout statment b--(post decrement) the value of bstill be 4 for output(while printing) because of post decrement operator.

*/