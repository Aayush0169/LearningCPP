//Print floyd triangle
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    cout<<"The Pattern is:"<<endl;
    int x=1;
    for(int i =1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
             cout<<x++;
        }
     cout<<endl;  
    }
    return 0;
}
