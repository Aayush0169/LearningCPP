/*Write a function that takes the radius of 
a circle as an argument and returns its area.*/
#include<iostream>
using namespace std;
float area(float radius) {
     float PI = 3.143;
    return PI * radius * radius;
}
int main(){
    int radius;
    cout<<"Enter the radius of circle"<<endl;
    cin>>radius;
    cout<<"The area of circle is "<<area(radius)<<endl;
    return 0;
}