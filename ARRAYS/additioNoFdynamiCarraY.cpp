/*adding all elemsnts of an array 
taking inputs by usser*/
#include<iostream>
using namespace std;
int main (){
    int arr [11];
cout<<"Enter The Elements in the array :"<<" ";
for (int  i = 0; i <11; i++)
{
  cin>>arr[i];
}
int sum =0;
int size=sizeof(arr)/sizeof(arr[2]);
for (int j = 0; j<11; j++)
{
   sum+=arr[j];
}
cout<<"Here is the sum of array"<<endl;
cout<<sum<<endl;
return 0;

}