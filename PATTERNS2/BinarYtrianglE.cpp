//Print the given pattern(BINARY TRIANGLE)
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the numbers of roes: "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){

            if ((i+j)%2==0)
            {
                cout<<"1";
                cout<<" ";
            }
            else
            {
                cout<<"0";
                cout<<" ";
            }
            
        }cout<<" "<<endl;
    }
   
}