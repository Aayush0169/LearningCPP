//Rectangle on user given inputs
#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"(enter diffrent dimmensions for rectnagle)"<<endl;
    cout<<"Enter the dimenssion of row"<<endl;
    cin>>a;
    cout<<"enter the dimenssion of coulmn"<<endl;
    cin>>b;
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j <=b; j++)
        {
            cout<<"*"<<" ";
        }


        cout<<endl;

    }
    return 0;
}