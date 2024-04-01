/*Count the number of elements in given array
greater than a given number x.*/
#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter a number:"<<endl;
    cin>>x;
    int number[]{1,3,5,7,8,4,56,45,12,9,78},i;
    int size= sizeof(number)/sizeof(number[0]);
  
    if (x>size)
    {
        cout<<"The given number is greater than the number of elements in array."<<endl;
    }
    else{
    cout<<"The given number is not greater than the number of elements in array."<<endl;
    }
    cout<<"The number of elements in array is "<<size<<".";
    
    return 0;


}
