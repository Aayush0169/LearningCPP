#include<iostream>
using namespace std;
int main (){
    int array []={12,15,14,8,15,56,85,9};
    int x;
    cout<<"Enter the number/elemt you want to find:-"<<endl;
    cin>>x;
    int result= -1;
   int size=  sizeof(array)/sizeof(array[2]);
    for(int i=0;i<size;i++)
    if(array[i]==x)
    {
        result=i;
    }
    
cout<<result<<endl;
return 0;


}