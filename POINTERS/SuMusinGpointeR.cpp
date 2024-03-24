/*Write a program to find the sum of two numbers using pointers*/
#include<iostream>
using namespace std;
int main ()
{
    int num1,num2,sum;
    int *point1 =&num1;
    int *point2 =&num2;
    cout<<"Enter the first number:"<<endl;
    cin>>*point1;
    cout<<"Enter the second number:"<<endl;
    cin>>*point2;
    
    sum=(*point1)+(*point2);
    cout<<"The Sum of "<<num1<<" and "<<num2<<" is "<<sum<<" .";
    return 0;

}