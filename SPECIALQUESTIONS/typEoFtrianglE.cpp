//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle

#include<iostream>
using namespace std;
int main (){
    int a, b, c;
    cout<<"enter dimensions of the triangle"<<endl;
    cin>>a >>b >>c;
    if (a==b && b==c)
    {
       cout<<"the triangle is an equilateral triangle"<<endl;
    }
    else if (a != b && a != c && b != c)
    {
      cout<<"the triangle is a scalene triangle"<<endl;
    }
    else{
    cout<<"this is an isosceles triangle"<<endl;
}
return 0;
}