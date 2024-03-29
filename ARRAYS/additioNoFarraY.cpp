/*Calculate the sum of all the elements in the
given array.*/
#include<iostream>
using namespace std;
int main (){
    int arr []={52,63,85,74,98,25,10,3,6,8,4,2,4};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[1]);
    for (int i = 0; i <13; i++)
    {
   sum+=arr[i];     
    }
    cout<<sum;
    return 0;
}