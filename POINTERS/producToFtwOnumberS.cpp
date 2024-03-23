/*Write a program to find the product of two numbers using pointers*/
#include <iostream>
using namespace std;

int main() {
   int a,b;
   int *p=&a;
   int*q=&b;
   cout<<"Enter the first number"<<endl;
   cin>>a;
   cout<<"Enterthe second number"<<endl;
   cin>>b;
   int product;
   product= (*p)*(*q);
   cout<<"The product of "<<a<<" and "<<b<<" is "<<product;
    return 0;
}
