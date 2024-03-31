//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main (){
    int math[5]={2,4,6,8,10};
    int product=1;
    for (int i = 0; i <5; i++)
    {
        product*=math[i];
    }
    cout<<product;
    return 0;

}