//Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main (){
    int a=3;
    int b=4;
    int n;
    cout<<"enter the number of terms you want to print:"<<endl;
    cin>>n;
    
    cout<<"The GP is:"<<endl;
    for (int i = 0; i < n; i++)
    {
      cout<<a<<" ";
      a*=b;
    }
    return 0;
}