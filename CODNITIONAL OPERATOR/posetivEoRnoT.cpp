#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    string connclusion = (n>0)? "the number is posetive " :"the number is negative";
    cout<<connclusion;
    return 0;

}